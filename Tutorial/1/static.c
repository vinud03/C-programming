#include <stdio.h>

int func1(int b)
{
    return b * 10;
}

int main()
{
    int b = 51;
    int val = func1(b);
    int *ptr = &val;
    printf("The value of func1 is:%d\n", val);
    printf("Location of val is:%d",ptr);

    return 0;
}