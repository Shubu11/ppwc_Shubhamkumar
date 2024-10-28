#include <stdio.h>
int main() {
    float i;
    float p = 1.0;
    printf("Enter item value: ");
    scanf("%f", &i);
    if (i != 0) {
        p *= i;
    }
    printf("Product = %.2f", p);
    return 0;
}