
### Format Specifiers Table

Here is the information consolidated from the image:

| Specifier | Description | Output Example |
| :--- | :--- | :--- |
| `%d` | Print as decimal integer. | `123` |
| `%6d` | Print as decimal integer, at least 6 characters wide (right-aligned). | `    123 ` |
| `%f` | Print as floating point (defaults to 6 decimal places). | `3.141590` |
| `%6f` | Print as floating point, at least 6 characters wide. | `3.141590` |
| `%.2f` | Print as floating point, exactly 2 characters after the decimal point. | `3.14` |
| `%6.2f` | Print as floating point, at least 6 wide and 2 after decimal point. | `   3.14 ` |

-----

### Syntax Breakdown (Technical Explanation)

The structure of a format specifier in C:

`%[width][.precision]type`

1.  **The Width (`6` in `%6f`):**

      * Specifies the **minimum number** of characters the output will occupy.
      * If the number is shorter than the width, it is padded with spaces to the left (right-aligned).
      * If the number is longer than the width, the width is ignored, and the full number is printed.

2.  **The Precision (`.2` in `%.2f`):**

      * For floating-point numbers (`f`), this indicates how many digits to print **after** the decimal point.
      * The system will round the last digit if necessary.

-----

### Code Example (in C)

```c
#include <stdio.h>

int main() {
    int integerVar = 123;
    float floatVar = 3.14159;

    printf("--- Integers ---\n");
    printf("|%d|\n", integerVar);      // Standard
    printf("|%6d|\n", integerVar);     // Width 6 (adds 3 spaces)

    printf("\n--- Floats ---\n");
    printf("|%f|\n", floatVar);        // Standard
    printf("|%.2f|\n", floatVar);      // Only 2 decimal places
    printf("|%6.2f|\n", floatVar);     // Width 6 and 2 decimal places (adds 2 spaces)
    return 0;
}
```

