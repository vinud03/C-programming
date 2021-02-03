// factorial using for loop (iterativ solution)

#include<stdio.h>

int main()
{
    int n=0,i,c=1;
    printf("Enter a number whose factorial you want\n");
    scanf("%d",&n);
    for (i=1; i <=n; i++)
    {
        c*=i;
    }
    printf("%d\n",c);
    
    
    return 0;
}
