#include <stdio.h>
#include<conio.h>


/* 

//Fibonacci series using recursive method

int fib_recursive(int n)
{
    if (n<=1)
        return n;
    else
        return(fib_recursive(n-1)+fib_recursive(n-2));
    
}

int main()
{
    // recursive method for fibo_series
    int n=0;
    printf("Enter numbe of element:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("%d",fib_recursive(i));
        printf(",");
    }
    return 0;
}
*/


int main()
{
    int n=0,k=0,j=0,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    k=n;
    while(k>0)
    {
        j=k%10;
        sum+=(j*j*j);
        k=k/10;
    }
    if (sum==n)
        printf("%d is an armstrong number",n);
    else
        printf("%d is not an armstrong number",n);
    return 0;
}

