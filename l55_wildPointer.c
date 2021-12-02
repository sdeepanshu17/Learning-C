#include<stdio.h>
#include<stdlib.h>

/*
WILD POINTER:
Uninitialized pointers are wild pointer
*/

int main()
{
    int a = 3;
    int *ptr;  //This is a wild pointer
    // *ptr = 34;  //this is not a good practice
    ptr = &a;  //No longer a wild pointer
    printf("the value of a is %d\n", *ptr);
    return 0;
}