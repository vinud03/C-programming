#include<stdio.h>
int main()
{
    int a,i,c=0;
    printf("Enter a number which table you want: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        c=0;
        c=a*i;
        if (c>50)
        {
            break;
        }
        printf("%d * %d = %d\n",a,i,c);
        
    }
    return 0;
}
