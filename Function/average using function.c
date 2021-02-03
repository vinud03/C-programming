#include<stdio.h>
void avg(int,int,int,int,int);
void main()
{
    int a,b,c,d,e;
    printf("\nCalculating avg of numbers");
    avg();
}


void avg(int,int,int,int,int)
{
    printf("\nEnter five numbers");
    scanf("%d %d%d %d %d",&a,&b,&c,&d,&e);
    float av=(a+b+c+d+e)/5;
    printf("The Average is %f",av);

}
