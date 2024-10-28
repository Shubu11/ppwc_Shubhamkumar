#include <stdio.h>
int main() {
    float a, b;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    if(a > b) b = a - b;
    else b = b - a;
    
    printf("Difference: %.2f\n", b);
    return 0;
}