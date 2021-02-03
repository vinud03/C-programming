#include<stdio.h>

/*
here the average of the number in array using pointer method use.
here the pointer *x get the memory location of the arrays first element i.e. x[0]
using pointer we can make changes in arrays and can work on it.

*/

float avg(int *x,int n)  // here int *x get the memory location of the x[0], & int n get the number of elemnts(students) in array
{  
    int a=0;
    for (int i=0;i<n;i++)
    {
        a+=*x;   // sum of the all elements in array 
        x++;     //  for next memory location 

    }
    return a/n;   // returning the average of the elements

}
int main()
{
    int x[50];
    int n;
    float c=0;
    printf("Enter number of student\n");
    scanf("%d",&n);
    printf("Enter marks of students\n");
    for (int i= 0; i<n; i++)
    {
        scanf("%d", &x[i]);    // get the marks of the students
    }
    c= avg(&x[0],n);
    printf("The average is : %f",c);
    
    
    return 0;
}