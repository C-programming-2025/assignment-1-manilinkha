#include <stdio.h>
#include <math.h>
int main()
{
    int num, checker;
    printf("enter a number: ");
    scanf("%d", &num);
    checker = (int)(sqrt(num)) % 2 == 0;
    printf("result: %d", checker);
    return 0;
}