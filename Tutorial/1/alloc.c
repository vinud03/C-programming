/* use of malloc

*/
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int n;
//     printf("Enter the size of the array you want to create\n");
//     scanf("%d",&n);
//     ptr = (int *)malloc(10 * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value no. %d of this array\n",i);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at %d of this array is %d\n",i,ptr[i]);
//     }
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n,k=0;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    k=n;
    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);

    }
    free(ptr);

    printf("Enter the size of the new array you want to create\n");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
        printf("\n");
    }
    for (int i = 0; i < k; i++)
    {
        printf("The new value at %d of this array is %d\n",i,ptr[i]);
    }

    
    return 0;
}