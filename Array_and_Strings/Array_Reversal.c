/*
Problem: Array Reversal (HackerRank)

Task:
Given an integer n and an array of n integers, reverse the array in place
and print the reversed array.

Output:
Print the reversed array elements separated by spaces.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int start = 0, end = num - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
