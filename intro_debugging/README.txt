# C - Debugging with Python Tutor

## Description

Programs that compile successfully can still be wrong. In C, many mistakes are not syntax errors but **logic errors**: loops that run one time too many (or too few), variables that change when they shouldn't, or values that are never reset.

**Debugging** is the systematic process of finding and fixing these problems. Instead of guessing or rewriting code blindly, effective debugging relies on tracing execution step by step and observing how the program's state changes over time.

In this project, small C programs are debugged using **Python Tutor's C visualizer**, which executes code one line at a time and shows:

- variable values
- loop iterations
- function calls and returns
- control flow through conditionals

The goal is not only to fix the code, but to understand exactly **why** it was wrong and how the correction changes the program's behavior.

## Learning Objectives

By the end of this project, you should be able to explain, without the help of Google:

- What debugging is and why step-by-step tracing is necessary
- How to use Python Tutor to:
  - execute C code line by line
  - inspect variable values at each step
  - follow loop and nested loop execution
  - observe how functions are called and what they return
- How to identify and fix common logic errors involving:
  - off-by-one loop conditions
  - incorrect loop control variables
  - improper variable updates
  - incorrect use of function return values

## Resources

- [Python Tutor - C Visualizer](https://pythontutor.com/c.html)
- [Python Tutor - Tool overview](https://pythontutor.com/)

## Requirements

### General

- All files compile on Ubuntu with:

  ```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89
  ```

- Output must match the expected output **exactly**, including spaces and newlines
- The checker compiles and runs each submitted file independently
- No extra output is added
- Function names and file names are not changed

### Allowed

- Variables
- `if` / `else`
- Loops (`for`, `while`)
- Nested loops
- Functions

### Not allowed

- Pointers
- Arrays
- Structs
- Dynamic memory
- File I/O

## Debugging Workflow

1. Open the [C visualizer](https://pythontutor.com/c.html) and paste the buggy program.
2. Click **Visualize Execution**.
3. Step through the code with **Next** (and **Prev** to go back).
4. At each step, compare what the variables *actually* hold with what they *should* hold.
5. Find the exact line where the actual state first differs from the expected state. That line, or the condition controlling it, is the bug.
6. Fix it, run the visualizer again, and confirm the state is now correct at every step.
7. Compile with the required flags and check the output matches exactly.

> Fixing the code without step-by-step tracing skips the core skill this project is meant to teach. Debugging is about understanding execution, not guessing.

## Common Logic Errors

### Off-by-one loop condition

```c
/* Meant to print 0 to 4, but prints 0 to 5 */
for (i = 0; i <= 5; i++)
	printf("%d\n", i);
```

Fix: use `i < 5`. In the visualizer, watch the value of `i` on the last iteration.

### Variable not reset in a nested loop

```c
j = 0;
for (i = 0; i < 3; i++)
{
	/* j is never reset, so the inner loop only runs on the first pass */
	while (j < 3)
	{
		printf("%d%d ", i, j);
		j++;
	}
}
```

Fix: move `j = 0;` inside the outer loop, right before the inner loop.

### Wrong loop control variable

```c
for (i = 0; i < 3; i++)
	for (j = 0; j < 3; i++) /* updates i instead of j */
		printf("*");
```

Fix: the inner loop must update `j`. In the visualizer, notice `j` never changes.

### Ignoring a function's return value

```c
int add(int a, int b)
{
	return (a + b);
}

/* ... */
add(x, y);          /* result is thrown away */
printf("%d\n", x);  /* prints the old value */
```

Fix: store or use the result, e.g. `x = add(x, y);`. In the visualizer, watch the return value disappear when the function's frame closes.

## Tasks

| # | File | Bug type | Fix summary |
|---|------|----------|-------------|
| 0 | `0-file.c` | | |
| 1 | `1-file.c` | | |
| 2 | `2-file.c` | | |

## Author

Ahmed Alharbi
