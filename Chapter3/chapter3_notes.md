# Chapter 3 - Formatted Input/Output

# 3.1 The printf Function

-`printf`: A function to show contents of a string, know as the **format string**, wtih values posible inserted at specified points in the string.

- Conversion Specifications: A placeholder representing a value to be filled in during printing. Begins with `%` and its follwed by a character `('f', 'd', etc)` that specifes how the value is **converted** from its internal form (binary) to printed form (characters)
    - Form: `%m.pX` or `%-m.pX`
        - `m` -> Minimum Field Width (the minimum number of characters to be "reserved" for the value insertion)
            - Positive `m` indicates "righ-justified" characters
            - Negative `m` indicates "left-justified" characters
        - `p` -> Precision (rounding or added values for required length of actual value)
        - `X` -> The Conversion Specifier.
    -Ex: `printf("Whole number: %d\n, i")`
        - `i` is an integer and is inserted at `%d` within the string.

- NOTE: C compilers aren't required to check that the number of conversion specifications in a format string matches the number of output items.


- Escape Sequences: Escape sequences enable strings to contain characters that would otherwise cause problems for the compiler, including nonprinting (control) characters and characters that have a special meaning to the compiler (such as ").
    - Common Escape Sequences:
        1. `\a`: Alert (audible beep)
        2. `\b`: Backspace (cursor moves back one position)
        3. `\n`: New line (move cursor to beginning of next line)
        4. `\t`: Horizontal tab (move cursor to next tab stop)
    - To print literal `"` or `\` escape them using `\` like normal.
        - Ex. `\"`, `\\`

# The `scanf` Function: 

## The Basics
**`scanf`** is the standard C function for reading formatted input from the user (keyboard). It functions essentially as a **pattern-matching** tool.

* **Syntax:** `scanf("format_string", &variable);`
* **The `&` (Ampersand) Rule:** You **must** place the `&` symbol before variable names (except for strings/pointers). This passes the *memory address* of the variable so `scanf` can modify it.
    > **Warning:** Forgetting `&` is a common error that can cause the program to crash immediately or behave unpredictably.

---

## 2. How `scanf` Processes Input
`scanf` views input as a continuous **stream of characters**, ignoring line breaks (Newlines are just characters to `scanf`).

* **Skipping Whitespace:** When reading numbers (`%d`, `%f`), `scanf` automatically skips over "white-space characters" (spaces, tabs, newlines) to find the beginning of the number.
* **Matching Rules:** It reads characters as long as they belong to the requested data type.
    * *Integers (`%d`):* Reads signs (+/-) and digits. Stops at a decimal point or letter.
    * *Floats (`%f`):* Reads signs, digits, decimal points, and scientific notation (`e` or `E`).

---

##  The "Put Back" Rule
When `scanf` encounters a character that does **not** belong to the current data type, it stops reading for that variable and **puts the character back** into the input stream.

**Example:**
If reading an integer (`%d`) from the input `1-20`:
1.  It reads `1`.
2.  It sees `-`. Since a minus sign cannot appear in the *middle* of an integer, it stops.
3.  It stores `1` in the variable and "puts back" the `-`.
4.  The *next* `scanf` call (or the next variable) will start reading from that `-`.

---

## Ordinary Characters in Format Strings:
You can include specific symbols (like commas, slashes, or spaces) in the `scanf` format string, but they follow strict rules:

### A. Whitespace in Code (`"%d %d"`)
A space in your format string is a flexible command. It tells `scanf` to:
> "Consume and ignore **all** consecutive whitespace characters in the input until a non-whitespace character is found".

### B. Non-Whitespace Characters (`"%d/%d"`)
These require an **exact match**.
* **Strict Matching:** If you write `"%d/%d"` and the user types `5 / 96` (with a space), it will **fail** because the space in the input does not match the `/` in the code.
* **The Fix:** Use `"%d /%d"` (add a space before the slash in your code) to handle potential spaces typed by the user.

---

## `printf` vs. `scanf`
Do not confuse the syntax between these two functions:

| Feature | `printf` | `scanf` |
| :--- | :--- | :--- |
| **Purpose** | Output (Write to screen) | Input (Read from user) |
| **Variables** | Do **NOT** use `&` | **MUST** use `&` |
| **Format** | Used for display formatting | Used for strict pattern matching |