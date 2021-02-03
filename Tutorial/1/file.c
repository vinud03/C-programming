#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;
    char str[100]="This content was produce by vinayak";
    // ****** Reading a file.
    // ptr =fopen("abc.txt","r");
    // fscanf(ptr,"%s",str);
    // printf("The content of this file has %s\n",str);

    //writing a file.
    ptr =fopen("abc.txt","a");
    fprintf(ptr,"%s",str);
    printf("The content of this file has %s\n",str);


    return 0;
}