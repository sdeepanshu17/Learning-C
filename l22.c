#include<stdio.h>

float c1(value)
{
    float converted = value * 0.621371;
    return converted;
}

float c2(value)
{
    float converted = value * 0.0833333;
    return converted;
}

float c3(value)
{
    float converted = value * 0.393701;
    return converted;
}

float c4(value)
{
    float converted = value * 0.453592;
    return converted;
}

float c5(value)
{
    float converted = value * 0.0254;
    return converted;
}


int main()
{
    int choice=1;
    printf("Welcome to Units Converter\n");
    printf("1. KM to Miles\n");
    printf("2. inches to foot\n");
    printf("3. cms to inches\n");
    printf("4. pounds to kg\n");
    printf("5. inches to metres\n");
    printf("Enter a number to proceed: \n");
    scanf("%d",&choice);

    float v;
    printf("Enter the Value: \n");
    scanf("%f",&v);

    if (choice==1)
    {
        printf("Converted Value: %f\n",c1(v));
        main();
    }
    else if (choice==2)
    {
        printf("Converted Value: %f\n",c2(v));
        main();
    }
    else if (choice==3)
    {
        printf("Converted Value: %f\n",c3(v));
        main();
    }
    else if (choice==4)
    {
        printf("Converted Value: %f\n",c4(v));
        main();
    }
    else if (choice==5)
    {
        printf("Converted Value: %f\n",c5(v));
        main();
    }
    else
    {
        printf("Invalid Choice, restarting\n");
        main();
    }
    

    return 0;
}
