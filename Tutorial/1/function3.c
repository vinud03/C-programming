#include<stdio.h>
int takenumber();
int main()
{
    int c;
    c=takenumber();
    printf("The number is:%d",c);
    return 0;
}


int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}