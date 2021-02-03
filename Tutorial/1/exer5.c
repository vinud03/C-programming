#include<stdio.h>
#include<string.h>

void reverse(char z[50])
{
    puts(strrev(z));
    printf("\n");
}

void retreat(char m[50])
{
    int c=strlen(m);
    int k=c;
    char z[50];
    for(int i=0; i<c;i++)
    {
        k--;
        z[k]=m[i];
    }
    printf("%s",z);

}

int main()
{
    char a[50];
    gets(a);
    printf("String befor reversal : %s\n",a);
    printf("String after reverse using strrev:\n");
    reverse(a);
    printf("%s\n",a);
    printf("string reversal using retreat:");
    retreat(a);

    return 0;
}