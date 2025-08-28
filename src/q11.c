#include <stdio.h>
int main()
{
    int x, Answer;
    printf("Enter a number: ");
    scanf("%d", &x);
    Answer = ++x * 3 - 10;
    printf("the result is: %d", Answer);
    return 0;
}