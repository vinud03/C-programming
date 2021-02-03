#include<stdio.h>

/*
here in c inheritance is not used so we can't access data of other functions
*/


void marks()
{
int a[50],b[50],n,i;
 printf("Enter number of students:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter roll number of student\n");
        scanf("%d",&a[i]);
        printf("Enter marks of student\n");
        scanf("%d",&b[i]);
    }   
}

int result()
{
    int i,j,a[i],b[i];
    printf("Enter your number");
    scanf("%d",&i);
    printf("The marks of student %d is %d\n",a[i],b[i]);

}


int main()
{
    int m,a[50],b[50],n,i;
    label:
        printf("press 1. for enter marks\n press 2. for see result\n press 3. to exit\n");
        scanf("%d",&m);
        switch (m)
        {
        case 1:
            marks();
            break;
        case 2:
            result();
            break;
        
        default:
            goto end;
            break;
        }
        goto label;
    end:
    
    
    return 0;
}
