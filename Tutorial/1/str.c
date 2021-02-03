#include<stdio.h>
#include<string.h>
int main()
{
    char str[52];
    int i=0;
    printf("Enter first string\n");
    gets(str);
    while (str[i]!=0)
    {
        i++;
    }
    printf("%d\n",i);
    
    printf("%d\n",strlen(str));
    for (int i=0;i<strlen(str);i++)
    {
        printf("%c\n",str[i]);
    }
    
    
    return 0;
}