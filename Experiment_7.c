#include <stdio.h>
int main(){
    float r;
    printf("ENTER RADIUS OF CIRCLE: ");
    scanf("%f",&r);
    float area = 3.14 * r * r;
    printf("AREA OF CIRCLE OF RADIUS %.2f is : %.2f",r,area);
}