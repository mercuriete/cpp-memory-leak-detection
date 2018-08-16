# C++ Memory Leak Detection

This project is illustrating [this blog post](https://mercuriete.github.io/article/detecting-memory-leaks).

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](/LICENSE)

| Build status          | Systems / Compilers         |
| ------------- | ------------------------------------------ |
| [![CLang  / GCC / XCode Builds](https://travis-ci.org/mercuriete/cpp-memory-leak-detection.svg?branch=master)](https://travis-ci.org/mercuriete/cpp-memory-leak-detection) | Linux (clang6  / gcc8) OSX (XCode 8.3 clang) |
| [![Visual Studio Builds](https://ci.appveyor.com/api/projects/status/vo9c1lxd90w87mr9?svg=true)](https://ci.appveyor.com/project/mercuriete/cpp-memory-leak-detection)       | Windows (Visual Studio 2017 / 2015 / 2013)  |

## Motivation
This is an example of usage of several memory sanitizer tools avaliable for c++ projects.
On Linux side we use ASAN and in windows we use CRT libray.

## Build

```shell
  cmake .
  make
```

## Acknowledgement

This project is a fork of: https://github.com/LearningByExample/ModernCppCI
All acknowledgement goes to Juan Medina author of that repository.
