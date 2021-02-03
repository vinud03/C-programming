#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    printf("Enter a number");
    scanf("%d",&a);
    switch (a)
    {
    case 2 :
    printf("value is 2");

    case 3 :
    printf("value is 3");
        break;
    
    case 5 :
    printf("value is 5");
        break;

    case 4 :
    printf("value is 4");
        break;
    
    default:
    printf("Nothing is match");
        break;
    }
    return 0;
}
