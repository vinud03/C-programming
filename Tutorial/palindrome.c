#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0, temp = 0, k = 0;
Here:
    n = 0, temp = 0, k = 0;
    printf("Enter a number to check whether palindrome or not\n");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        k = (k * 10) + (n % 10);
        n = n / 10;
    }
    printf("The reverse numbe is:%d\n", k);
    if (k == temp)
    {
        printf("Given number is palindrome\n");
    }
    else
    {
        printf("Given number is not palindrome\n");
    }
    goto Here;

    return 0;
}