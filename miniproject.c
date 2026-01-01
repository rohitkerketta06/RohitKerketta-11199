#include <stdio.h>
void scanDangerZones(int r, int c, int b[r][c])
{
    printf("\nScanning Matrix for Danger Zones...\n");
    int found = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (b[i][j] == 1)
            {
                printf("DANGER ZONE found at Position: (Row %d, Col %d)\n", i, j);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("All clear! No Danger Zones detected.\n");
    }
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    int a[r][c];
    printf("Enter elements (1 for Danger, 0 for Safe):\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Position [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    scanDangerZones(r, c, a);

    return 0;
}