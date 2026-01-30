/*
Problem: Sum and Difference of Two Numbers (HackerRank)

Task:
Read two integers and two floating-point numbers.
Calculate and print:
1. The sum and difference of the integers
2. The sum and difference of the floating-point numbers

Output:
Print the results in the following order:
- Sum and difference of integers
- Sum and difference of floating-point numbers (rounded to 1 decimal place)
*/

#include <stdio.h>

int main()
{
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f", c + d, c - d);

    return 0;
}
