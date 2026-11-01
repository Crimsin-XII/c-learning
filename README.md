# Learning to Code

My notes and practice code while learning C, then C++, as groundwork for studying machine learning.

## About

I'm starting from scratch and building up solid fundamentals. Each topic gets a short set of notes, example code, and a small project to reinforce it. Everything here is practice, so expect experiments and mistakes along the way.

**Goals**

- Get comfortable with C fundamentals
- Move on to C++
- Use that foundation to start learning machine learning

## Roadmap

**C**

- [x] How a C program works: source code, compiling with gcc, `main`
- [x] Variables and types
- [x] Type sizes with `sizeof`
- [x] Memory addresses and the `&` operator
- [ ] Input and output (`printf`, `scanf`) *(in progress)*
- [ ] Decisions and loops
- [ ] Functions (parameters, return values, pass-by-value)
- [ ] Arrays
- [ ] Pointers
- [ ] Strings
- [ ] Structs
- [ ] Dynamic memory
- [ ] File I/O
- [ ] Compilation (multiple files, headers, Makefiles)

**C++**

- [ ] Coming after the C material

## Setup

My environment: Windows with WSL2 (Ubuntu), VS Code, and gcc.

```bash
# Check that the compiler is installed
gcc --version
```

## Compiling and Running

```bash
# Compile a file
gcc -Wall -Wextra -g -o lesson1 lesson1.c

# Run it
./lesson1
```

`-Wall -Wextra` turn on extra warnings, which helps catch mistakes early. `-g` adds debugging information.

## Repo Structure

```
.
├── 01-basics/         # Compiling, variables, types, sizeof, addresses, input/output
└── README.md
```

New folders (functions, arrays, pointers, projects) get added as I reach each topic.

## How I Study Each Topic

1. Read a detailed explanation and walk through an example
2. Take a quick knowledge test
3. Build a small project to lock it in

## Notes

This is a personal learning repo. Feel free to look around, but expect unfinished work and mistakes.