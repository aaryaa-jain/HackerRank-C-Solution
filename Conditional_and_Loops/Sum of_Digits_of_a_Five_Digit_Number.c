/*
Problem: Sum of Digits of a Five Digit Number (HackerRank)

Task:
Given a five-digit integer, calculate and print the sum of its digits.

Output:
Print the sum of the digits of the given number.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}
