#include<stdio.h>
void printstar(int n);
int main()
{
    int n,i;
    printf("Enter number of stars yu want\n");
    scanf ("%d",&n);
    printstar(n);
    return 0;
}

void printstar(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c",'*');

    }
}
