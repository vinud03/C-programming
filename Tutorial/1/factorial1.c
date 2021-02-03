#include<stdio.h>

int facto(int n)
{
    if(n==1 || n==0)
    return 1;

    return(n*facto(n-1));
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d.",n,facto(n));
    
    return 0;
}