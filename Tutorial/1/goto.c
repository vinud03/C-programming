#include<stdio.h>

int main(int argc, char const *argv[])
{
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    // printf("Hello world\n");
    // goto label;
    // end:
    //     printf("WE ARE AT END\n");
    int n;

    for (int i = 0; i <8; i++)
    {
        printf("%d\n",i);
        for(int j=0; j<8;j++ )
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d",&n);
            if (n==0)
            {
                goto label;
            }
        }
    }
    label:

    return 0;
}
