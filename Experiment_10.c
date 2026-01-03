#include <stdio.h>
int main()
{
    int p, q;
    char operator;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d", &p);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d", &q);
    printf("ENTER THE OPERATION YOU WANT TO PERFORM :");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
    {
        printf("Sum of two numbers:%d", p + q);
        break;
    }
    case '*':
    {
        printf("Product of two numbers:%d", p * q);
        break;
    }
    case '-':
    {
        printf("Difference of two numbers: %d", p - q);
        break;
    }
    case '/':
    {
        printf("Division of two numbers:%d", p / q);
        break;
    }
    case '%':
    {
        printf("Remainder of two numbers:%d", p % q);
        break;
    }
    default:
    {
        printf("Please Enter A Valid Operator i.e- +, -, *, /, % ");
    }
    }
}