// Math Functions

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, squareroot;
    scanf("%f %f", &a, &b);
    scanf("%f", &squareroot);
    printf("%f \n", pow(a, b));
    printf("%f", sqrt(squareroot));
    return 0;
}