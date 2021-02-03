#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,sum=0,i=0;
    scanf("%d",&n);
    int ar[100];
     for(i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    printf("%d",sum);
}
