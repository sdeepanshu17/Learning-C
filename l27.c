#include<stdio.h>

int main()
{
    // char a='3';
    // char *ptra=&a;
    // printf("%x\n",ptra);
    // printf("%x\n",ptra-2);
    // printf("%x\n",ptra++);

    int  arr[]={21,25,11,54,48};
    printf("Value at position 0 of the array is: %d\n",arr[0]);
    printf("The address of first element of the array is: %d \n",&arr[0]);
    printf("The address of first element of the array is: %d \n",arr);
    printf("The address of second element of the array is: %d \n",&arr[1]);
    printf("The address of second element of the array is: %d \n",arr+1);

    printf("The value at address of first element of the array is: %d \n",*(&arr[0]));
    printf("The value at address of first element of the array is: %d \n",*(arr));
    printf("The value at address of second element of the array is: %d \n",*(&arr[1]));
    printf("The value at address of second element of the array is: %d \n",*(arr+1)); 
    
    return 0;
}