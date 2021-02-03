#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
int main()
{
    int a=0,b=0;
  printf("\n Calculating sum of two numbers");
      printf("\n Enter two numbers");
    scanf("%d %d",&a,&b);
sum(a,b);
    return 0;
}

void sum(int a, int b)
{
    int c;
    c= a+b;
    printf("\n The Sum is:%d",c);

}
