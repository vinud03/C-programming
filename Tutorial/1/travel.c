#include<stdio.h>
#include<string.h>

typedef struct Driver
{
    char name[30];
    char dl_no[20];
    char route[15];
    int kms;
} dr;


int main()
{
    dr d1,d2,d3;
    printf("Enter the details of the drivers: \n");
    printf("Enter the name of first driver: \n");
    scanf("%s",&d1.name);
    printf("Enter the dl.no of first driver: \n");
    scanf("%s",&d1.dl_no);
    printf("Enter the route of first driver: \n");
    scanf("%s",&d1.route);
    printf("Enter the no. of kms of first driver: \n");
    scanf("%d",&d1.kms);
    printf("Enter the name of second driver: \n");
    scanf("%s",&d2.name);
    printf("Enter the dl.no of second driver: \n");
    scanf("%s",&d2.dl_no);
    printf("Enter the route of second driver: \n");
    scanf("%s",&d2.route);
    printf("Enter the no. of kms of second driver: \n");
    scanf("%d",&d2.kms);
    printf("Enter the name of third driver: \n");
    scanf("%s",&d3.name);
    printf("Enter the dl.no of third driver: \n");
    scanf("%s",&d3.dl_no);
    printf("Enter the route of third driver: \n");
    scanf("%s",&d3.route);
    printf("Enter the no. of kms of third driver: \n");
    scanf("%d",&d3.kms);
    
    printf("Printing the details of the drivers:\n");
    printf("for driver no.1 :\n name:%s\n DL number:%s\n route:%s\n kms:%d\n",&d1.name,&d1.dl_no,&d1.route,d1.kms);
    printf("for driver no.2 :\n name:%s\n DL number:%s\n route:%s\n kms:%d\n",&d2.name,&d2.dl_no,&d2.route,d2.kms);
    printf("for driver no.1 :\n name:%s\n DL number:%s\n route:%s\n kms:%d\n",&d3.name,&d3.dl_no,&d3.route,d3.kms);
    
    return 0;
}