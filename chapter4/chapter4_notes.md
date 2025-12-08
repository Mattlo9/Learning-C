# Chapter 4 -Expression

- One of C's distinguishing characteristics is its emphasis on expressions rather than statements.
- Expression: formulas that show how to compute a value.
    -Variables: Represents a value to be computed as the program runs-    -Constants: Represents a value that doesn't change. 

- Operators: Symbols that perform specific operations on values or variables.
- Operands: The values or expressions on which the operator act.

## 4.1 Arithmetic Operators

- Arithmetic Operators: Perators that performs addition, subtraction, multiplication and division.

- Unary: Operators that only require **one** operand.
- Binary: Operators the require **two** operands.
    - Additive:
        - Addition `+`: Adds two values together. 
        - Subtraction `-`: Subtracts two values from another. 
    - Multiplicative:
        - Multiplication `*`: Multiplies two values together.
        - Division `/`:
            - `int / int` "integer division" returns the *floored* value of the quotient.
            - `float / int`: returns a `float`.
        - Remainder (modulo) `%`: `i % j` returns the remainder of the quotient `i / j`.
            - Requires both operands to be type `int`.

- Implementation-defined Behavior: The C standard allows certain aspects of the language to vary between different compilers, architectures, or operating systems, but requires that the implementation document how it behaves.

- Operator Precedence and Associativity: Rules that determine the order in which operators in an expression are evaluated.
    - Precedence: Defines which operators are evaluated first.
    - Associativity: Defines the order of evaluation when operators of the same precedence appear together (for example, left-to-right or right-to-left).
        - Left Associative: Operators that group from left-to-right.
            - Binary Arithmetic Operators (`*`, `/`, `%`, `+`, and `-`).
        - Right Associative: Operators that group from right-to-left.
            - Unary Arithmetic Operators (`+` and `-`).
            
- Lvalues: Represent an object stored in computer memory, not a constant or the result of a computation.
    -Varialbes are Lvalues

## 4.3 Increment and Decrement Operators

- Incrementing: Adding a value of 1.
- Decrementing: Subtracting a value of 1.

- Ways to Increment/Decrement:
    1. Basic Arithmetic
    ```c
        var = var + 1; // increment
        var = var - 1; // decrement
    ```
    2.  Compound Assignment
    ```c
        var += 1; // increment
        var -= 1; // decrement
    ```
    3.  Increment/Decrement Operators
    ```c
        ++var;   // prefix increment
        var++;   // postfix increment
        --var;   // prefix decrement
        var--;   // postfix decrement
    ``` 
    - Prefix and Postfix Operators (`++` and `--`)
        - Prefix: The variable is modified before its value is used in an expression.
            - Ex.
            ```c
                int x = 5;
                int y = ++x;   // x becomes 6, y = 6
            ```
        - Postfix: The variable is modified after its current value is used in an expression.
            - Ex.
            ```c
                int x = 5;
                int y = x++;   // y = 5, then x becomes 6   
            ```
