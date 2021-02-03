// factorial using recursion

#include<stdio.h>

int factorial(int n)
{
    if (n ==1 || n==0)
    {
        return 1;
    }
    else{
    return (n * factorial(n-1));
    }
}

int main()
{
    int n=0;
    printf("Enter a number whose factorial you want\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    
    return 0;
}
