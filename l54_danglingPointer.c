#include<stdio.h>
#include<stdlib.h>

/*
Dangling pointer is a pointer pointing to a free memory location
dangling means latka hua
Causes for formation of dangling pointer:
1. deallocation of memory
2. returning local variables in fuction calls
3. variable going our of scope
*/

int* funcDangling()
{
    int a,b,sum;
    a=31;
    b=32;
    sum=a+b;
    return &sum;
}

int main()
{
    //Case1: Deallocation of memory
    int *ptr= (int *)malloc(7*sizeof(int));
    ptr[0]=12;
    ptr[1]=12;
    ptr[2]=12;
    ptr[3]=12;
    free(ptr); //ptr is now dangling pointer

    //Case2: returning local variables in fuction calls
    int * dangPtr = funcDangling();  //ptr is now dangling pointer

    //Case3: variable going out of scope
    int * dangPtr3;
    {
        int myVar=12;
        dangPtr3=&myVar;
    }
    //here myVar goes out of scope and hence location pointed by dangPtr3 is freed so dangPtr3 is now a dangling pointer

    return 0;
}