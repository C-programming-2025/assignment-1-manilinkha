#include <stdio.h>
#include <string.h>
int main() {
    char name[100]; 
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Happy Birthday to you, %s!\n", name);
    return 0;
}