/*
Problem: Printing Pattern Using Loops (HackerRank)

Task:
Given an integer n, print a square pattern of size (2n - 1) where the values
decrease towards the center and increase towards the edges.

Output:
Print the required pattern with each number separated by a space.
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = top;
            if (left < layer) layer = left;
            if (bottom < layer) layer = bottom;
            if (right < layer) layer = right;

            printf("%d ", n - layer);
        }
        printf("\n");
    }

    return 0;
}
