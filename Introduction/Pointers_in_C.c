/*
Problem: Pointers in C (HackerRank)

Task:
Write a function that updates two integers such that:
- The first integer becomes the sum of the two numbers
- The second integer becomes the absolute difference of the two numbers

Output:
Print the updated values, each on a new line.
*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
