# C Programming Practice — Question Bank Set 1

This repository contains standalone C solutions for all 46 questions listed in the supplied question bank.

## Folder structure
- `Module-1`: Input/output, variables and arithmetic
- `Module-2`: Conditional statements and operators
- `Module-3`: Loops and repeated computation
- `Module-4`: Digit extraction and number manipulation
- `Module-5`: Factors, divisibility and mathematical loops
- `Module-6`: Nested-loop online judge problems
- `Module-7`: 16 nested-loop and pattern-printing questions

## Compile and run
Using GCC:

```bash
gcc Module-1/Q2_Solve_Me_First.c -o solution
./solution
```

On Windows with MinGW:

```bash
gcc Module-1/Q2_Solve_Me_First.c -o solution.exe
solution.exe
```

Each `.c` file is a separate program. Compile and run one file at a time.

## Important notes about the source question bank
The supplied PDF gives only titles (not full statements, input formats, or constraints) for many problems in Modules 1–6. The solutions use the standard versions of those named platform problems and common input formats. Before submitting, compare each solution with the exact problem page or your instructor's required format.

- Module 1, Q1 assumes one integer is read and echoed.
- Module 3, Q5 implements the LeetCode 2652 rule: sum integers from 1 through `n` divisible by 3, 5, or 7.
- Module 4, Q1 assumes a single integer and prints the sum of its digits.
- Module 5, Q3 uses `unsigned long long`; large factorials can overflow this type.
- Module 5, Q5 prints `YES` or `NO` for primality.
- Module 6, Q2 uses the standard HackerRank concentric-square number pattern.
- Module 7 follows the exact pattern descriptions and constraints in the supplied PDF.

## GitHub submission
1. Create a public repository named `C-Programming-Practice`.
2. Extract this ZIP file.
3. Open the repository and choose **Add file → Upload files**.
4. Upload the `Module-1` through `Module-7` folders and `README.md`.
5. Click **Commit changes**.
6. Copy your repository URL and submit that link.

## Academic integrity
Read and test each program yourself. Be prepared to explain the loops, conditions, and calculations used in the solutions.
