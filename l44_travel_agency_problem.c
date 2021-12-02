#include<stdio.h>
#include<string.h>

/*
You manage a travel agency, and you want your n drivers to input their following details:

Name of the driver
Driving License Number
Route 
Kms
Your program should be able to take n as input (or you can take n=3 for simplicity), and your drivers will start inputting their details one by one. Your program should print details of the drivers in a beautiful fashion. For this task, you have to use Structure only. These four inputs: name, driving license number, route, and km information will be struct members. After creating struct, you have to create its array of size “n.” 
*/

typedef struct Details
{
    char name;
    int lic_no;
    char route;
    int kms;
} dr;


int main()
{
    dr d1,d2,d3;

    printf("Enter name of driver 1: \n");
    scanf("%s",&d1.name);
    printf("Enter license number of driver 1: \n");
    scanf("%d",&d1.lic_no);    
    printf("Enter route of driver 1: \n");
    scanf("%s",&d1.route);    
    printf("Enter kms driven of driver 1: \n");
    scanf("%d",&d1.kms);


    printf("Enter name of driver 2: \n");
    scanf("%s",&d2.name);    
    printf("Enter license number of driver 2: \n");
    scanf("%d",&d2.lic_no);    
    printf("Enter route of driver 2: \n");
    scanf("%s",&d2.route);    
    printf("Enter kms driven of driver 2: \n");
    scanf("%d",&d2.kms);


    printf("Enter name of driver 3: \n");
    scanf("%s",&d3.name);    
    printf("Enter license number of driver 3: \n");
    scanf("%d",&d3.lic_no);    
    printf("Enter route of driver 3: \n");
    scanf("%s",&d3.route);    
    printf("Enter kms driven of driver 3: \n");
    scanf("%d",&d3.kms);

    printf("**********Printing Information of all drivers**********\n" );

    printf("For driver 1: \n");
    printf("Name: %s\n",&d1.name);
    printf("License Number: %d\n",d1.lic_no );
    printf("Route: %s\n",&d1.route);
    printf("Kms driven: %d\n",d1.kms );

    printf("For driver 2: \n");
    printf("Name: %s\n",&d2.name);
    printf("License Number: %d\n",d2.lic_no );
    printf("Route: %s\n",&d2.route);
    printf("Kms driven: %d\n",d2.kms );

    printf("For driver 3: \n");
    printf("Name: %s\n",&d3.name);
    printf("License Number: %d\n",d3.lic_no );
    printf("Route: %s\n",&d3.route);
    printf("Kms driven: %d\n",d3.kms );


    return 0;
}