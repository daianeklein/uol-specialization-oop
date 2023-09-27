# C++ is strongly typed

```
c++

#include <iostream>

int main()
{
    char c = 0;
    std::cout << "char: " << sizeof(c) << std::endl;

    signed int i= 0;
    std::cout << "signed int : " << sizeof(i) <<std::endl;

    float f = 0.0f;
    std::cout << "float : " << sizeof(f) << std::endl;

    long double d = 0.0;
    std::cout << "ld : " << sizeof(d) << std::endl;
}
```


This C++ program declares four different variables of types `char`, `signed int`, `float`, and `long double`. Then it prints the size of each variable type in bytes using the `sizeof` operator.

Here's a step-by-step breakdown of the code:

1. `char c = 0;` - Declares a character variable `c` and initializes it with 0.
2. `std::cout << "char: " << sizeof(c) << std::endl;` - Prints the size of the character variable `c`.
3. `signed int i= 0;` - Declares a signed integer variable `i` and initializes it with 0.
4. `std::cout << "signed int : " << sizeof(i) <<std::endl;` - Prints the size of the signed integer variable `i`.
5. `float f = 0.0f;` - Declares a float variable `f` and initializes it with 0.0.
6. `std::cout << "float : " << sizeof(f) << std::endl;` - Prints the size of the float variable `f`.
7. `long double d = 0.0;` - Declares a long double variable `d` and initializes it with 0.0.
8. `std::cout << "ld : " << sizeof(d) << std::endl;` - Prints the size of the long double variable `d`.

Below is the equivalent Python code using Python 3 syntax. In Python, you can use the `sys.getsizeof` method to find the size of a variable:

```python

import sys

c = '0'  # char in C++ is equivalent to str in Python, with one character.
print("char:", sys.getsizeof(c))

i = 0  # signed int in C++ is equivalent to int in Python.
print("signed int:", sys.getsizeof(i))

f = 0.0  # float in C++ is equivalent to float in Python.
print("float:", sys.getsizeof(f))

d = 0.0  # long double in C++ has no direct equivalent in Python, but Python's float is often implemented using a double in C.
print("long double equivalent:", sys.getsizeof(d))


```
