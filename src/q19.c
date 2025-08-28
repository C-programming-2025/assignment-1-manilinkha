#include <stdio.h>
int main()
{
    int a, b, c, checker;
    printf("enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    checker = a == b && b != c;
    printf("result: %d", checker);
    return 0;
}