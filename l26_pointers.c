#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Lets learn about pointer!\n");
    int a=12;
    int *ptra = &a;
    int *ptr = NULL;
    printf("The value of a is: %d\n",a);
    printf("The address of a is: %x\n",ptra);
    printf("The value of a is: %d\n",*ptra);
    printf("The address of pointer to a is: %p\n",&ptra);
    
    printf("The address of garbage ptr2 is: %p\n",ptr);
    

    //format specifiers
    return 0;
}
