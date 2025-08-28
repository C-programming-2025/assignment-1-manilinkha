
#include <stdio.h>
int main()
{
    char a;
    int checker;
    printf("enter a character: ");
    scanf("%c", &a);
    checker = a >= 'A' && a <= 'Z';
    printf("result: %d", checker);
    return 0;
}