#include<stdio.h>

int factorial(int number)
{
    if (number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number -1));
    }
    

}

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("%d\n",factorial(num));
    return 0;
}
