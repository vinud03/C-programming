#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,temp;
    printf("enter a number");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        temp=n%i;
        if (temp==0)
        {
            printf("%d is not prime number",n);
        }
    }
    printf("%d is prime number",n);
    return- 0;
}
