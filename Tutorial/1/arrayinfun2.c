#include<stdio.h>

/*
average of numbers using array in function.
here if you change the value of array in function the value in the main function also change

*/
int func(int arr[]) // here we declare the array as a input
{
    int a=0;
    for (int i = 0; i < 3; i++)
    {
        a+=arr[i];
    }
    return a/3;
    
}

int main()
{
    int arr[]={4,6,5};
    int avg= func(arr);  // here we call the func function using argument array arr
    printf("%d",avg);
    
    return 0;
}