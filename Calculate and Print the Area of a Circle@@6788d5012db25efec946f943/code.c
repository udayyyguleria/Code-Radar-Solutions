#include <stdio.h>

int main() {
    float rad;
    float area;

    scanf("%f", &rad);

    area= 3.14*rad*rad;

    printf("Area: %.2f" , area);

    return 0;
}