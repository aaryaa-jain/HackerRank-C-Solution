/*
Problem: Functions in C (HackerRank)

Task:
Create a function that takes four integers as input and returns the maximum of the four.

Output:
Print the maximum value among the four integers.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    return max;
}

int main(void)
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d", max_of_four(a, b, c, d));

    return 0;
}
