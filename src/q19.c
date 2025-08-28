#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", (a == b && b != c)?
           "a is equal to b and b is not equal to c." : 
           "Condition not met.");
    return 0;
}
