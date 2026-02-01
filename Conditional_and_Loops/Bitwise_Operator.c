/*
Problem: Bitwise Operators (HackerRank)

Task:
Given two integers n and k, consider all pairs (a, b) such that
1 ≤ a < b ≤ n. For each pair, calculate:
- a & b
- a | b
- a ^ b
Find and print the maximum value of each operation that is less than k.

Output:
Print three integers, each on a new line:
1. Maximum bitwise AND value less than k
2. Maximum bitwise OR value less than k
3. Maximum bitwise XOR value less than k
*/

#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int max_and = 0, max_or = 0, max_xor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {

            int and_val = a & b;
            int or_val  = a | b;
            int xor_val = a ^ b;

            if (and_val < k && and_val > max_and)
                max_and = and_val;

            if (or_val < k && or_val > max_or)
                max_or = or_val;

            if (xor_val < k && xor_val > max_xor)
                max_xor = xor_val;
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);

    return 0;
}
