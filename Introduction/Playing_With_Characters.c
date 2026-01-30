/*
Problem: Input and Output in C (HackerRank)

Task:
Read and print the following inputs:
1. A single character
2. A string
3. A sentence

Output:
Print each input on a new line in the same order.
*/

#include <stdio.h>

int main(void)
{
    char ch;
    char s[100];
    char sentence[100];

    scanf("%c", &ch);
    scanf(" %[^\n]", s);

    getchar(); // consume leftover newline
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%
