#include <stdio.h>
int main()
{
    int x, checker;
    printf("enter a number: ");
    scanf("%d", &x);
    checker = x % 2 == 0 && x > 0;
    printf("%d", checker);
    return 0;
}
