#include <stdio.h>
#include <string.h>
int main()
{
    int r, k, c;
    printf("Enter the dimension of matrix\n");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], mul[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the a(%d)(%d) element:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the b(%d)(%d) element:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // for(int i=0;i< r;i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d  ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    //
    // for(int i=0;i< r;i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d  ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("a*b=");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
