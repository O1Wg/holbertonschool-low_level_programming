# C - Functions, nested loops

This project introduces functions and nested loops in C. All output is
written with `_putchar` only; no standard library functions such as
`printf` or `puts` are used.

## Learning Objectives

**Nested loops.** A loop placed inside another loop. For every single
iteration of the outer loop, the inner loop runs to completion. This is
useful for working with rows and columns, such as printing a grid or a
multiplication table.

**Functions.** A named block of code that performs one task. A function
can take parameters and can return a value. Functions keep code
reusable and easier to read.

**Declaration vs. definition.** A declaration tells the compiler a
function's name, return type, and parameter types, without a body. A
definition provides the body, the code that actually runs. A function
can be declared many times but defined only once.

**Prototype.** A function declaration that includes the parameter
types, for example `int _putchar(char c);`. It lets the compiler check
that calls to the function are correct before it sees the definition.

**Scope of variables.** A variable declared inside a block `{ }` (a
local variable) exists only inside that block. Global variables are
visible to the whole file, but they are not allowed in this project.

**gcc flags.**

| Flag | Meaning |
| --- | --- |
| `-Wall` | Enables most common warnings |
| `-Werror` | Treats every warning as an error |
| `-Wextra` | Enables extra warnings not covered by `-Wall` |
| `-pedantic` | Enforces strict ISO C and warns about non-standard code |
| `-std=gnu89` | Compiles as C89/C90 with GNU extensions |

Because of `-std=gnu89 -pedantic`, variables must be declared at the
start of a block, and `for (int i = 0; ...)` is not allowed.

**Header files.** A `.h` file holds function prototypes (and macros)
that several `.c` files can share. It is included with
`#include "main.h"`. Quotes search the current directory first, while
angle brackets, as in `#include <stdio.h>`, are used for system headers.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style (`betty-style.pl` and `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- No standard library functions; only `_putchar` is allowed
- All prototypes, including `_putchar`, are in `main.h`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c <main_file>.c <task_file>.c -o <output>
```

## Files

| File | Description |
| --- | --- |
| `main.h` | Header file with the prototypes of all functions and `_putchar` |
| `<task_file>.c` | Description of the task |

## Author

Ahmed Alharbi
