#include <stdio.h>
int main() {
    int a, b, c;
    int is_true;
    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    is_true=(a > b) && (c != 0);
        printf("%d\n", is_true);
    return 0;
}
 