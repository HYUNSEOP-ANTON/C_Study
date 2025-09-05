# Chapter 2 — Programming Process

## Objectives
1. understanding the programming process
2. demonstrating Hello World.c

## Development process
Requirements analysis → Design → Implementation → Testing → Maintenance

### Design
Design is the part mainly oriented toward developing the algorithm.

### Implementation
Implementation is the core.
By using development tools, we can write source code and compile it.

- **Writing source code** : making source files (*.c)
- **Compile and link** : the compiler can compile (translate source code to machine language and make an object file) and link (connect the object file with libraries).
Why are they separate? -> If there is any change, you don't have to compile everything again.
- **Execution and debugging**: if all above processes are completed, an executable file (e.g., .exe) is generated. However, if there is any logical error (the program isn't working as expected), debugging is the process where you fix those logical errors.

## Demonstrating Hello World.c
```c
#include <stdio.h> // including the stdio.h header file.
// anything that starts with # is a preprocessor directive, which runs before compilation.

int main(void) // the start of the main function.
{
    printf("Hello World!"); // printing text
    return 0; // returning 0 to the OS; normally 0 means "the program has finished successfully."
}
```