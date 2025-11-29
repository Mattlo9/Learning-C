# Chapter 2 - Fundamentals

## 2.1 Writing a Simple Program

```c
#include <stdio.h>

int main(void) {

    printf("To C, or not to C: thats is the question.\n");
    return 0;
}
```

-`#include <stdio.h>`: Indicates inclution of the `standard I/O` library, a package/collection of helpful tools/functions.

- `printf`: A function that prints formatted text to the terminal window, found within the 
`standard I/O` library.
    -`\n`: A *escape character* to indicate the cursor to move to a new line within the `printf` call.

- `return 0;`: Indicates that the program "returns" the value 0 to the operating system when it terminates.

- Steps to convert **program.c* to a form that the machine can read and execute:
    1. **Preprocessing**: TThe program is first given to a **preprocessor**, which obeys commands that begin with **# (known as directives)**. A preprocessor is a bit like an editor; it can add things to the program and make modifications.
        -The preprocessor is usually integrated with the **compiler**
    2. **Compiling**: The modified program now goes to a compiler, which translates it into **machine instructions (object code)**. The program isn’t quite ready to run yet, however.
    3. **Linking**: In the final step, a linker combines the object code produced by the compiler with any additional code needed to yield a complete executable program. This additional code includes **library functions (like printf)** that are used in the program.

## 2.2 The General Form of a Simple Program
-Directives: Commands intended for the preprocessor prior to compilation 
    -Always begin with '#' character.
    -No semicolon.

-Headers: `.h` files that contain important/addtional functions to be "included" into the program before it's compiled
    -Ex.`<stdio.h>` -> standard I/O library

-Functions: A series of statements that have been gropued together and given a name
    -`main` is the only mandatory function within c program, that gets called automatically when te program is executed.
        -Returns a *status code* (0 or 1) back to the operting system when the program terminates. 
        See [2.1 Writing a Simple Program](#21-Writing-a-Simple-Program) for example
        - String Literal: A series of characters enclosed in dobuble qutation marks.
## 2.3 Comments
-Types of Comments:
    1. `/* This is a comment */`
        -Can wrap multiple lines
    2. `//This is a comment`

## 2.4 Variable and Assignment
- Variables: A way to store temporaly during program execution
- Types: A description of what kind of data variable holds.
    - Numeric Types: Determine the largest and smallest numbers that the variable can store, as well as wether or not digits are allowed after the decimal point.
        - `int`: Can store a whole number (positive or negative), like 0, 1, 392 or -2343. **The largest `int` value is typically 2,147,483**
        - `float`: Can store much larger numbers than `int` with digits after de decimal point
            - Arithmetic on `float` can be slower than on type `int`
            - The value of float is often just an approximation of the number that was stored in it.
- Declarations: Variables must be **declared** before they can be used
    - Ex `int length, height, width`

- Assigment: A variable can be given a value by means of assigment
    - When assigning a `float` value, append `f` to the end of the number to explicitly indicate the type to the compiler
        - Ex `float num = 3.14f`

- Initialization: When a variable is assigned a value it is  **initialized**, variables without assigment are considered **unitialized**


## 2.5 Reading Input
- `scanf`: Function to get input from the user and store it in a variable
    - Needs to know what form the input data will take

## 2.6 Defining Names of Constants
- Macro Definition: A **preprocessor directive** that defines a name or identifier to represent a value or piece of code. When the program is compiled, the preprocessor replaces every occurrence of the macro name with its defined value or code before actual compilation begins.

## 2.7 Identifiers

## 2.8 Layout of a C Program