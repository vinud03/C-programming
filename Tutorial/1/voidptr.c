#include <stdio.h>
#include <string.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is:%f\n",*((float*)ptr));
    ptr = &a;
    printf("The value of a is:%d",*((int*)ptr));

    return 0;
}