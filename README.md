# Holberton School – Low-Level Programming

My C projects from the **Holberton School Software Engineering Intensive Program (SEIP)** at **Tuwaiq Academy**.

This repo tracks my progress in low-level programming, from my very first `Hello, World` to pointers, dynamic memory, and structures. Each folder is a separate project with its own tasks and its own README.

## Projects

| Project | What it covers |
|---|---|
| [hello_world](./hello_world) | The compilation steps (preprocessor, compiler, assembler, linker), `puts`, `printf`, `write`, and data type sizes |
| [variables_if_else_while](./variables_if_else_while) | Variables, `if`/`else`, loops, and printing with `putchar` |
| [functions_nested_loops](./functions_nested_loops) | Writing functions, header files, prototypes, and nested loops |
| [more_functions_nested_loops](./more_functions_nested_loops) | More functions and nested loops: drawing shapes, FizzBuzz, prime factors |
| [intro_debugging](./intro_debugging) | Tracing programs step by step with Python Tutor to find logic errors |
| [pointers_arrays_strings](./pointers_arrays_strings) | Pointers, arrays, and writing my own versions of string functions |
| [malloc_free](./malloc_free) | Dynamic memory with `malloc` and `free`: strings, arrays, and 2D grids |
| [more_malloc_free](./more_malloc_free) | More dynamic memory: `exit` on failure, my own `calloc`, and integer ranges |
| [structures_typedef](./structures_typedef) | Structures, `typedef`, and allocating and freeing a struct |
| [simple-calculator](./simple-calculator) | An interactive menu-based calculator |
| [benchmarking](./benchmarking) | Timing C programs, comparing algorithms, and a report on CPU load and energy |

## Requirements

- Compiled on Ubuntu with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the [Betty](https://github.com/holbertonschool/Betty) style guide
- All files end with a new line

## How to compile and run

```bash
git clone https://github.com/O1Wg/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/<project_folder>
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c -o <program>
./<program>
```

Most tasks are functions, not full programs, so compile them together with their test `main` file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <N>-main.c <task_file>.c -o <program>
```

Projects that print with `_putchar` also need `_putchar.c` in the command.

## Author

**Ahmed Alharbi** – [@O1Wg](https://github.com/O1Wg)

