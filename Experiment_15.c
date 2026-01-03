#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int f;
    printf("ENTER ELEMENT YOU WANT TO SEARCH : ");
    scanf("%d",&f);
    for (int i = 0; i < n; i++)
    {
        if (f == a[i])
        {
            printf("FoUnD");
            return 0;
        }
    }
    printf("nOtFoUnD");
}