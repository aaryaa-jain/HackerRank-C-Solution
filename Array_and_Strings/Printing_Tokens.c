/*
Problem: Printing Tokens (HackerRank)

Task:
Given a string containing words separated by spaces, print each word
on a new line.

Output:
Print each token of the string on a separate line.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = malloc(1024 * sizeof(char));

    scanf("%[^\n]", s);

    s = realloc(s, strlen(s) + 1);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }
    free(s);
    return 0;
}
