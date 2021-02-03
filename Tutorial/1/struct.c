#include<stdio.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
};


int main()
{
    struct Student harry,gana,sayali;
    harry.id=1;
    gana.id=2;
    sayali.id=3;
    harry.marks=40;
    gana.marks=46;
    sayali.marks=49;
    harry.fav_char='A';
    gana.fav_char='B';
    sayali.fav_char='C';

    
    printf("Harry got %d marks\n",harry.marks);
    
    return 0;
}