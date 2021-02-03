#include <stdio.h>
#include <string.h>
int main()
{
    int a=225;
    int *ptr = &a;
    if (ptr != NULL)
        printf("The address of a is :%d",*ptr);
    else
        printf("The pointer is NULL and cannot be dereference");
    return 0;
}