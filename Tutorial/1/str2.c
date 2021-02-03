#include<stdio.h>
#include<string.h>
int main()
{
    char str1[52],str2[52],str3[50];
    printf("Enter a String\n");
    gets(str1);
    printf("Enter a String\n");
    gets(str2);
    printf("\n");
    puts(strcat(str1, str2));
    printf("\n");
   printf("%d\n",strlen(str1));
    puts(strrev(str1));
    printf("\n");
    puts(strcpy(str3,str1));
    printf("\n");
    printf("%d\n",strcmp(str1,str2));
    
    
    return 0;
}