#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;
    int c = 10;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer\n");
    }

    return 0;
}