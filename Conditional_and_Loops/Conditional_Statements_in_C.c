/*
Problem: Conditional Statements in C (HackerRank)

Task:
Given an integer n, print its English representation if it lies between 1 and 9.
If n is greater than 9, print "Greater than 9".

Output:
Print the required string based on the value of n.
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("one");
    } else if (n == 2) {
        printf("two");
    } else if (n == 3) {
        printf("three");
    } else if (n == 4) {
        printf("four");
    } else if (n == 5) {
        printf("five");
    } else if (n == 6) {
        printf("six");
    } else if (n == 7) {
        printf("seven");
    } else if (n == 8) {
        printf("eight");
    } else if (n == 9) {
        printf("nine");
    } else {
        printf("Greater than 9");
    }

    return 0;
}
