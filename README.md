# c_programming_source
total 8 files to input and exercise

https://userpages.umbc.edu/~squire/clang.shtml source code

## process of turning a C source file into an executable file involves four main steps:

1. preprocessing

`#include` `#define` `#if`

> gcc -E main.c -o main.i

2. compilation

> gcc -S main.i -o main.s


3. assembly

tools: `as'
> gcc -c main.s -o main.o

4. linking
tools: ld
> gcc main.o -o main

```
main.c
  ↓ [Preprocessing]
main.i
  ↓ [Compilation]
main.s
  ↓ [Assembly]
main.o
  ↓ [Linking]
main   ← executable
```

## developtments tools on Ubuntu
C promgramming on Ubuntu
1. compiler gcc/clang
2. text editor or ide vim nano emacs vscode
3. debugger gdb lldb
4. build tools make cmake
5. manuals and documentation man info glibc-doc
> man 3 printf; info libc 
6. optional tools(for learning testing)
valgrind clang cscope ctags
7 