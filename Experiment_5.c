#include <stdio.h>
int main() {
    int age = 20;
    float price = 19.99;
    double pi = 3.1415926535;
    char grade = 'A';
    printf("--- Data Types and Format Specifiers ---\n");
    printf("Integer (%%d): %d\n", age);
    printf("Float (%%f): %.2f\n", price);
    printf("Double (%%lf): %lf\n", pi);
    printf("Character (%%c): %c\n", grade);

    return 0;
}