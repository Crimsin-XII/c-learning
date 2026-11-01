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

- [x] Hello world and compiling with gcc
- [x] Variables, arithmetic, and user input
- [x] Functions (return types, parameters, pass-by-value)
- [x] Arrays
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
gcc -Wall -Wextra -o hello hello.c

# Run it
./hello
```

`-Wall -Wextra` turn on extra warnings, which helps catch mistakes early.

## Repo Structure

```
.
├── 01-basics/         # Hello world, variables, input
├── 02-functions/      # Functions and examples
├── 03-arrays/         # Arrays and exercises
├── 04-pointers/       # Pointers (in progress)
├── projects/          # Small projects for each topic
└── README.md
```

Folder names will change as I go. Each folder holds the `.c` files and a short `notes.md`.

## How I Study Each Topic

1. Read a detailed explanation and walk through an example
2. Take a quick knowledge test
3. Build a small project to lock it in

## Resources

- Add books, courses, and docs you're using here

## License

MIT. Feel free to look around, but this is a personal learning repo.
