/*
 * Program to shift x to the right by n, using a logical shift
 * 
 * Compilation: gcc logical_shift.c
 * Execution: ./a.out
 * @Harsh_garg, 1910990582, 18/08/2021
 * Assignment 3 
 */

#include <stdio.h>

/* logicalShift - shift x to the right by n, using a logical shift
 * can assume that 0 <=n<=31
 * examples: logicalShift(0x87654321, 4) = 0x8765432
 * Legal ops:  ~ & ^ | + << >>
 * Max ops: 20
 */
int logicalShift(int x, int n)
{
    return (x >> n) & (~(((1 << 31) >> n) << 1));
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    printf("%d", logicalShift(x, n));
}
