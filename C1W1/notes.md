# [Introduction to Object-Oriented Programming in C++](https://www.coursera.org/learn/cplusplus-crypto-i/home/welcome)

## Coding Workshop

### 1. Running the first C++ program

```C++
#include int main()
{
    std::cout << "Hello BSc CS" << std::endl;
    return0;
}

```


### Explanation

1. `#include <iostream>`
   * This line tells the compiler to include the input-output stream header file (`iostream`). This header file is necessary for using the input and output streams, such as `cin` for input and `cout` for output.
2. `int main()`
   * This line declares the main function, the entry point of every C++ program. When you run a C++ program, it starts executing from the `main` function. The `int` before `main` signifies that this function will return an integer.
3. `{`
   * This opens the body of the `main` function. Everything between this and the closing `}` is the code that will be executed when the program runs.
4. `std::cout << "Hello BSc CS" << std::endl;`
   * This line is responsible for printing "Hello BSc CS" to the console. `std::cout` is the C++ output stream, and `<<` is the stream insertion operator used to insert the string "Hello BSc CS" into the output stream, which results in printing it to the console. `std::endl` is an I/O manipulator that inserts a newline character and flushes the output buffer. It's similar to Python's `print("Hello BSc CS")`.
5. `return 0;`
   * This line signifies the end of the `main` function and returns 0 to the operating system, indicating that the program has executed successfully. A non-zero value would indicate an error.
6. `}`
   * This closes the body of the `main` function.

---



### Compiling and Linking

In C++, the process to convert source code to an executable program involves several steps. Two key steps are compiling and linking.

1. **Compiling** :

* The compiler (like `g++`) translates the C++ source code (`.cpp` file) into an object file (`.o` or `.obj` file), which is a binary file containing machine code. This process checks the syntax and other errors in the code.

1. **Linking** :

* The linker combines object files (if there are multiple) and links them with necessary libraries to create the final executable file. This process resolves references (like function or variable references) between object files and libraries.

### `<iostream>` Library

The `<iostream>` library is part of the C++ Standard Library and provides functionalities for input and output operations using streams. The most common elements from this library are:

* `std::cin`: Standard input stream, usually used to read input from the keyboard.
* `std::cout`: Standard output stream, usually used to write output to the console.
* `std::cerr`: Standard error stream, usually used to output error messages to the console.
* `std::endl`: I/O manipulator used to insert a newline character and flush the output buffer.

### Commands

Now, let's explain the mentioned `g++` commands:

1. **`g++ -S <file_name>`** :

* This command compiles the source code (`<file_name>`) and stops before assembling, producing an assembly code file (`.s` file). This file contains a human-readable representation of the machine code instructions.

1. **`g++ -c <file_name>`** :

* This command compiles the source code (`<file_name>`) and stops before linking, producing an object file (`.o` file). This file contains machine code but is not executable yet as it hasn’t been linked.

1. **`g++ <file_name>`** :

* This command compiles, assembles, links the source code (`<file_name>`), and produces an executable file (usually with the same name as the source file, but without any extension in Unix/Linux, or with `.exe` extension in Windows). This executable file can then be run to execute the program.
