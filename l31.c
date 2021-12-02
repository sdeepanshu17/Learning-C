#include<stdio.h>

void changeValue(int* address)
{
    *address=45;
}

int main()
{
    int a=34, b=74;
    printf("the value of a now is %d \n",a);
    changeValue(&a);
    printf("the value of a now is %d \n",a);
    return 0;
}
