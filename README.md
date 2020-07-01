# c99cmaketemplate

A template for good practices to build a C (C99 standard) project, comprised of an executable, a library and the unit tests using CMake with Visual Studio Code.

## Step 1: Dependencies

A Linux distro  
Git >= 2.17.1, CMake >= 3.5 and (GCC >= 7.5.0 or CLang >= 6.0.0)  
or  
MacOS  
Git >= 2.17.1, CMake >= 3.5 and CLang >= 6.0.0  
Read: https://code.visualstudio.com/docs/cpp/lldb-mi  

Example for installing the dependencies on Ubuntu 18.04:  
*#apt install -y git cmake make gcc clang*

Visual Studio Code  
Extensions:  
C/C++ (ms-vscode.cpptools)  
CMake Tools (ms-vscode.cmake-tools)  

## Step 2: Building, Debugging and Unit Testing (Visual Studio Code)

Open this repo folder using Visual Studio Code. It will ask you which compiler to use (CLang or GCC). In case you prefer GCC, select the option specific to the C99 standard, as the CMake config files specifically set this standard to build the binaries.

You can now go to 'Run' and find the following Visual Studio Code tasks available:  
*CMake build and debug* (Build using CMake and start debugging the main application)  
*CMake build and unittest* (Build using CMake and start debugging the unittest application)

At the bottom of the Visual Studio Code IDE, you can also click on the button 'Run CTest'.

## Step 3: Building and Unit Testing (Command Line - No IDE)

On a terminal:

*$git clone https://github.com/mpeschke/c99cmaketemplate.git*  
*$cd c99cmaketemplate/*  
*$mkdir build*  
*$cd build/*  
*$cmake -DCMAKE_BUILD_TYPE=Debug ../.*  
*$cmake --build .*  
*$ctest*