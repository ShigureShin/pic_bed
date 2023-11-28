
# Step 01: A Basic Starting Point

## Exercise 1 - Building a Basic Project

A `CMakeLists.txt` file

- Start with command:
  - `cmake_minimum_required(VERSION 3.xx)`
- After this, call this to start a project (like "Tutorial"):
  - `project(Tutorial)`
  - This is just the project name
- Finally, call this to create an executable code files, using the specified source
  - `add_execuable(tutorial.cxx)`
  - And here is the real code file

And then the shell code part,

```shell
mkdir Step1_build
cd Step1_build
cmake ../Step1

# call that build system to compile/link project
cmake --build .

# for Visual Studio
cd Debug
# build Tutorial
./Tutorial 10
./Tutorial
# depending on the shell, the correct syntax may be `Tutorial`, `./Tutorial` or `.\Tutorial`
```

## Exercise 02 - Specifying the C++ Standard

special variables, many of these start with `CMAKE_`

- specify the C++ standard needed
  - `CMAKE_CXX_STANDARD`
  - `CMAKE_CXX_STANDARD_REQUIRED`
- And use `set()` to set these variables' value

## Exercise 03 - Adding a Version Number and Configured Header file

use a configured header file to print the project Version
- `@VAR@`
  - variables
- `configure_file()`
  - copy the input file to a given output file
  - and replace these variables with the current value of `VAR` in the `CMakeLists.txt` file



