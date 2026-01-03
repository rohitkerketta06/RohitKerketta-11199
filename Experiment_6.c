#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Enter  First No. to be swapped :");
    scanf("%d", &x);
    printf("Enter Second No. to be swapped :");
    scanf("%d", &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    int z;
    z = x;
    x = y;
    y = z;
    printf("After swap: x = %d, y = %d\n", x, y);
}