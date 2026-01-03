#include <stdio.h>

int main()
{
    printf("--------------------DEMONSTRATING CONTINUE----------------------------------\n");\
    printf("Skipping odd no. using continue\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    printf("--------------------DEMONSTRATING BREAK----------------------------------\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            printf("breaking entire loop at 8\n");
            break;
        }
        printf("Number: %d\n", i);
    }

    return 0;
}