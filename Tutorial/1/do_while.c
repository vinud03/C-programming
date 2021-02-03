#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i+=1;
    } while (i<n);
    


    return 0;
}
