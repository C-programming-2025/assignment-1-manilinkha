#include <stdio.h>
#include <math.h>
int main(){
    int num, sq, res;
    printf("Enter any number: ");
    scanf("%d", &num);
    sq = sqrt(num);
    res = pow(sq, 2);
    printf("%s", res == num ? "yes" : "no");
    return 0;
}