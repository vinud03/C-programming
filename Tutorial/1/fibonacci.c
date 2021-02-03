#include<stdio.h>

int main()
{
    int n1=0,n2=1,m,i,j,k;
    printf("Enter a number\n");
    scanf("%d",&k);

    printf("%d, %d,",n1,n2);
    for(i=0;i<k;i++)
    {
        m=n1+n2;
        printf("%d, ",m);
        n1=n2;
        n2=m;
    }
    return 0;
}
