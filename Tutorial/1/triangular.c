#include<stdio.h>
int main()
{
    int n;
    printf("For Triangular star pattern press 1\nFor Reverse Triangular star pattern prees 2\n");
    scanf("%d",&n);
    if (n==1)
    {
        for (int i=1;i<5;i++)
        {  
            for (int j=1;j<=i;j++)
                printf("*");
            printf("\n");

        }

    }
    else if (n==2)
    {
        for (int i=1;i<5;i++)
        {  
            for (int j=1;j<=5-i;j++)
                printf("*");
            printf("\n");

        }
    }
    
    
    
    return 0;
}