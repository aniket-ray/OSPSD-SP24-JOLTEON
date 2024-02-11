# OSPSD-SP24-JOLTEON
Open Source and Professional Software Development - Kamen Yotov - Assignment 1

## Prerequisite
Cmake
## Structure
```
OSPSD-SP24-JOLTEON/
├── .circleci/
│   └── config.yml
├── build/ (generated during build process)
├── src/
│   ├── calculator.cpp
│   └── main.cpp
├── test/
│   └── test_calculator.cpp
├── .gitignore
├── clang-format
├── CMakeLists.txt
├── LICENSE
├── README.md
```
## Build and Run
```shell
mkdir build
cd build
cmake ..
make
./calculator_app
```
Should print 256 + 256 = 512 in terminal

## Code Formatting 
Using Google Style in Clang for enforcing code formatting
## Continues Integration
CircleCI
## Issue and Pull Request Template
to do 
