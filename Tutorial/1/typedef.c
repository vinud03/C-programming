#include<stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
}std;     // here we change the name of the structure using the typedef function.

int main()
{
    std s1,s2;
    s1.id=56;
    s2.id=54;
    printf("Value of s1's Id is: %d\n",s1.id);
    printf("Value of s2's Id is: %d\n",s2.id);
    
    
    return 0;
}