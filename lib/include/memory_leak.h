/*
 *  Distributed under the MIT License (See accompanying file /LICENSE )
 */

#ifndef MEMORY_LEAK_HPP
#define MEMORY_LEAK_HPP

#if defined(_WIN32) || defined(_WIN64)
 
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <iostream>

#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
    
//the following sentence will blow your mind
#define new DBG_NEW


namespace MemoryLeak {

void atexit_handler()
{
  int result = 0;
  std::cout << "ending memory leak detector and dumping report" << std::endl;
  if ((result = _CrtDumpMemoryLeaks()) != 0) {
    std::cout << "memory leak detected. please debug with Visual Studio" << std::endl;
  }
  else{
    std::cout << "no memory leaks detected" << std::endl;
  }
  //Hahahahaha exit on an exit handler!
  //feel free to blame me if you get something really bad.
  exit(result);
}
int initialize_memory_leak_detector(){
    std::cout << "initializing memory leak detector" << std::endl;
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
    return 0;
}
int memory_leak_dump_report_at_exit = std::atexit(atexit_handler);
int memory_leak_initizalization_result = initialize_memory_leak_detector();
}

#endif //_DEBUG

#endif  // _WIN32 _WIN64

#endif  // MEMORY_LEAK_HPP
