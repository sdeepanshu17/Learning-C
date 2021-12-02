#include <stdio.h>
#include <stdlib.h>

/*
Dynamic memory allocation commands
1. Malloc() (memory allocation)
Syntax: ptr = (ptr-type*) malloc(size_in_bytes);
ptr=(int*) malloc(3*sizeof(int))
return value is void pointer to the allocated space
incase of insufficent memory in heap, null pointer is returned
all values at allocated memory are initialized to garbage values

2.Calloc() (contiguous memory allocation)
Syntax: ptr = (ptr-type*) calloc(n,size_in_bytes);
return value is void pointer to the allocated space
incase of insufficent memory in heap, null pointer is returned
all values at allocated memory are initialized to 0

3.Realloc()  (reallocation)
Syntax: ptr = (ptr-type*) realloc(ptr, new_size_in_bytes)
if dynamically allocated memory is insufficient we can change size of previously allocated memory using realloc

4.Free()
Syntax: free(ptr)
if dynamically allocated memory is not needed anymore, we can free it using free()
this will free the memory being used by the program in heap

*/

int main()
{
    // Use of malloc
    // int *ptr;
    // int n;

    // printf("Enter the size of array you want to create:\n");
    // scanf("%d", &n );

    // ptr = (int *)malloc(n * (sizeof(int)));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array: \n",i );
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of the array is: %d\n",i,ptr[i] );
    // }


    // Use of calloc
    int *ptr;
    int n;

    printf("Enter the size of array you want to create:\n");
    scanf("%d", &n );

    ptr = (int *)calloc(n , (sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array: \n",i );
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is: %d\n",i,ptr[i] );
    }

    // Use of realloc

    printf("Enter the size of new array you want to create:\n");
    scanf("%d", &n );

    ptr = (int *)realloc(ptr , n*(sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array: \n",i );
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is: %d\n",i,ptr[i] );
    }
    
    free(ptr);

    return 0;
}