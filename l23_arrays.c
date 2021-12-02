#include<stdio.h>

int main(int argc, char const *argv[])
{
    int array1[4];
    int array2[]={1,2,3,4};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter element %d of the array: \n",i);
    //     scanf("%d",&array1[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Element %d of the array is %d\n",i,array1[i]);
    // }
    
    int array3[2][4]= {{12,54,21,31},
                       {14,134,11,14}};

    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%d ",array3[j][k]);
        }
        
    }
    
    return 0;
}
