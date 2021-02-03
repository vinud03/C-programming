#include<stdio.h>
void addsub(int *x, int *y)
{
    int temp= *x;
    *x=*x+*y;
    *y=temp-*y;
    return;

}
int main()
{
    int a=10,b=8;
    printf("%d and %d\n",a,b);
    addsub(&a,&b);
    printf("%d and %d\n",a,b);
    
    
    
    return 0;
}