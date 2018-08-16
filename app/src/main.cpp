/*
 *  Distributed under the MIT License (See accompanying file /LICENSE )
 */

#include "memory_leak.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string* leaking_pointer = nullptr;//new string("leaking object");

  //You forgot to delete pointer
  leaking_pointer = new string("Hello, World!");
  cout << *leaking_pointer << endl;
  delete leaking_pointer;

  return 0;
}
