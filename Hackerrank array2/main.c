#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int j=0,k=0,i=0;
    int a[3],b[3];
     for(i = 0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i<3; i++)
    {
     scanf("%d",&b[i]);
    }
    for(i = 0; i<3; i++)
    {
        if(a[i]>=b[i])
        {
            j++;
        }
        if(a[i]<=b[i])
       {
           k++;
       }
       if(a[i]==b[i])
           {
               j=j-1;
               k=k-1;
           }
    }
    printf("%d %d",j,k);

return 0;
}
