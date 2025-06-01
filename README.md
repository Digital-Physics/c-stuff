A repository for C code as I go through second edition of "The C Programming Language" from ANSI.

First program in the book, first bug. In modern C (C99 and later), you need to explicitly specify the return type. So


#include <stdio.h>

main() {
    printf("hello world\n");
}



won't compile. But



#include <stdio.h>

int main() {
    printf("hello world\n");
}



will compile when you run "gcc hello_world.c -o hello_world_compiled" in the terminal.


