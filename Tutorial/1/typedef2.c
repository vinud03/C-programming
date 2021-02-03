#include<stdio.h>
int main()
{
    typedef int* intptr;
    intptr a,b;
    int c=85;
    a= &c;
    b= &c;
    printf("%d\n",*a);
    printf("%d\n",b);
    
    
    
    return 0;
}