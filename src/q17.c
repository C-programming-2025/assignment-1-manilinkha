#include <stdio.h>
int isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z');
}
int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    printf("%c %s an uppercase letter.\n", input, isUpperCase(input) ? "is" : "is not");
    return 0;
}
