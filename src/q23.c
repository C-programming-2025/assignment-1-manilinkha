#include <stdio.h>
#include <math.h>
int main()
{
    int num, checker;
    printf("enter a number: ");
    scanf("%d", &num);
    checker = (num > 0) && !(num & (num - 1));
    printf("result: %d", checker);
    return 0;
}