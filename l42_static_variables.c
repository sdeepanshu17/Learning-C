#include <stdio.h>

int func1(int b)
{
    static int myvar = 98;
    printf("The value of myvar is : %d\n", myvar);
    myvar++;
    // printf("The address of b inside func1 is: %d\n",&b);
    return b + myvar;
}

int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is : %d\n", val);
    // printf("the value of b in main is: %d\n",ptr);
    return 0;
}