#include<stdio.h>

void reassign(int* n1, int* n2)
{
    // int a1=*n1;
    // int b1=*n2;
    *n1=*n1+*n2;
    *n2=*n1-*n2-*n2;
}

int main()
{
    int a=5, b=3;
    printf("the value of a is: %d \n",a);
    printf("the value of b is: %d \n",b);
    reassign(&a,&b);
    printf("the value of a is: %d \n",a);
    printf("the value of b is: %d \n",b);
    return 0;
}