# C/C++ Basic Input Validator

A comprehensive collection of robust input validation functions for C and C++. This library helps developers handle user input safely by preventing common issues like buffer overflows, type mismatches (e.g., entering a char when an int is expected), and out-of-range values.

## Features

### 🛠 C Validations (`Cbasicvalidation.h`)
* **Integer Validation**: Full check for valid integers and non-negative range options.
* **Float Validation**: Validates floating-point numbers and handles invalid trailing characters.
* **Character Validation**: Supports single character ASCII checks and specific alphabetic range (A-Z, a-z) validations.
* **String Utilities**: includes `getche` style character array input.

### 🚀 C++ Validations (`CPPbasicvalidation.h`)
* **Primitive Types**: Enhanced validation for `int`, `float`, and `char` using `std::cin` and buffer flushing.
* **Fraction Support**: Special functions to validate and convert fractions (e.g., "2/3") into float values.
* **Array & Dynamic Memory**: 
  * Validates 1D and 2D arrays (both static and dynamically allocated).
  * Includes safe memory deallocation helpers (`delete1DArray`, `delete2DArray`).
* **String & Vector Handling**:
  * Support for `std::string` and `std::vector<std::string>`.
  * Real-time character validation using `getche()`.
  * Competitive programming helpers: Multiple delimiter parsing and string splitting.

## Getting Started

### Prerequisites
* A C compiler (e.g., GCC) or C++ compiler (C++11 or higher recommended).
* `conio.h` (Note: This is primarily for Windows environments).

### Usage
* Simply include the whole .cpp or .c file instead of header and compile only by using your file name (bad practic though).
OR
* Simply include the desired header in your project and compile with the command 
 **gcc your_file_name.c a.c -o my_program (C)**
 **g++ your_file_name.cpp a.cpp -o my_program (C++)**

```cpp
#include "CPPbasicvalidation.hpp"

int main()
{
    int age;
    // Ensures the user enters a non-negative integer
    age = validateint_fullwithrangealso(age); 
    return 0;
}
