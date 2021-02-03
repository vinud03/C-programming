#include<stdio.h>

int sum(int a, int b);

int main()
{
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    c= sum(a,b);
    printf("The sum of two numbers is:%d\n",c);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}