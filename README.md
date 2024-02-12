# OSPSD-SP24-JOLTEON
Open Source and Professional Software Development - Kamen Yotov - Assignment 1


## Getting Started

### Prerequisites

- C++ Compiler: Clang 14
- Testing Framework: Google Test(will be fetched during build)
- Continuous Integration: CircleCI(working remotely)
- Static Analysis: Clang-Tidy
- Code Formatting: Clang-Format

Make sure you have Clang 14 installed on your machine. If you don't, follow the instructions for your operating system to install Clang: [Official Clang Installation Guide](https://clang.llvm.org/get_started.html).

### Installing

Clone the repository:

```bash
git clone https://github.com/aniket-ray/OSPSD-SP24-JOLTEON.git
cd OSPSD-SP24-JOLTEON.git
```
### Run the tests
#### Build
```shell
mkdir build
cd build
cmake -D CMAKE_CXX_COMPILER="/usr/bin/clang++-14" -D CMAKE_C_COMPILER="/usr/bin/clang-14" ..
make
```
#### Run
```shell
cd build
ctest
```
### Continuous Integration (CI)
This project is configured for CircleCI. The .circleci/config.yml file contains all the CI settings. CI will automatically build the project, run tests, and perform static analysis with Clang-Tidy when code is pushed to the repository.


### Static Analysis Tool: 
Using Clang-Tidy for C++

### Code Formatting: 
Using Google Style in Clang for enforcing code formatting

### Issue and Pull Request Template
To be done
### Licence
MIT
