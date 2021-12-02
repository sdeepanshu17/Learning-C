#include<stdio.h>

int main()
{
    int j=3;
    for (int i = 1; i < 5; i++)
    {
        for (int k=4-i; k > 0; k--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
           
    }
    
    return 0;
}