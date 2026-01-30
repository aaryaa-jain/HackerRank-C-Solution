/*
Problem: Hello, World! in C

Task:
Print the following two lines:
1. Hello, World!
2. Welcome to C programming.

Output:
Hello, World!
Welcome to C programming.
*/

#include <stdio.h>

int main()
{
    char s[100];

    // Read input (not used in output)
    scanf("%[^\n]%*c", s);

    printf("Hello, World!\n");
    printf("Welcome to C programming.");

    return 0;
}
