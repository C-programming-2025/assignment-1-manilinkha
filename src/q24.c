#include <stdio.h>
#include <math.h>
int main()
{
    int num, sq, res, checker;
    printf("enter any number: ");
    scanf("%d", &num);
    sq = sqrt(num);
    res = pow(sq, 2);
    checker = res == num;
    printf("result: %d", checker);
    return 0;
}