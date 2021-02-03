#include<stdio.h>

int main()
{
    int a;
    int* p = NULL;
    int* p2 = NULL;
    a=27;
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%p",&p2);

    return 0;
}
