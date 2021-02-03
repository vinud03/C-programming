#include<stdio.h>

void swap(int *x,int *y)
{
    int temp = *x;  //save the value at address x in temp 
    *x = *y; // put value at address y to address x
    *y = temp; // copy the value of temp in the location shown by y
    return;

}

int main()
{
    int a=30,b=50;
    printf("%d and %d\n",a,b);
    swap(&a,&b);  //call by reference (call using the address of the variable a &b)
    printf("%d and %d\n",a,b);
    return 0;
   
    
    
    return 0;
}