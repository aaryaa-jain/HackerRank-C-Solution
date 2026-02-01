/*
Problem: 1D Arrays in C (HackerRank)

Task:
Given an integer n and an array of n integers, calculate and print the sum
of all the elements in the array.

Output:
Print the sum of the array elements.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}
