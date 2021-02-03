#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n,k;
    printf("Enter number of Employee\n");
    scanf("%d",&k);

    for (int i = 0; i < k; i++)
    {
        
        printf("Enter no. of character in your eID\n");
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter your eID\n");
        scanf("%s",ptr);
        printf("Employee ID is: %s\n",ptr);
        free(ptr);
    }


    return 0;
}