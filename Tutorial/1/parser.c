#include<stdio.h>
#include<string.h>

void parser(char* str)
{
    int j=0;
    int index=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]=='<')
        {
            j=1;
            continue;
        }
        else if (str[i]=='>')
        {
            j=0;
            continue;
        }
        if(j==0)
        {
            str[index]=str[i];
            index++;
        }
        
    }
    str[index]='\0';

    while (str[0]==' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i]=str[i+1];
        }
        
    }

    while (str[strlen(str)-1]==' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[strlen(str)]='\0';
        }
        
    }
    
}

int main()
{
    char str[]="<h1>     This is heading      </h2>";
    parser(str);
    printf("The parsed string is ~~%s~~",str);
    
    return 0;
}