#include<stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 3; i++)
    {
        //swap arr[i] with arr[6-i]
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;

    }
    

}

int main()
{
    int arr1[]={1,2,3,4,5,6,7};

    printf("Array before reversing is: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d.",arr1[i]);
    }
    printf("\n");

    arrayRev(arr1);
    printf("Array after reversing is: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d.",arr1[i]);
    }
    printf("\n");

    return 0;
}