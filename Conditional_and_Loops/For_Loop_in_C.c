/*
Problem: For Loop in C (HackerRank)

Task:
Given two integers a and b, print the following for every integer i from a to b:
- If i is between 1 and 9, print its English representation
- If i is greater than 9 and even, print "even"
- If i is greater than 9 and odd, print "odd"

Output:
Print the required output for each value of i on a new line.
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1: printf("one\n"); break;
                case 2: printf("two\n"); break;
                case 3: printf("three\n"); break;
                case 4: printf("four\n"); break;
                case 5: printf("five\n"); break;
                case 6: printf("six\n"); break;
                case 7: printf("seven\n"); break;
                case 8: printf("eight\n"); break;
                case 9: printf("nine\n"); break;
            }
        } else if (i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
