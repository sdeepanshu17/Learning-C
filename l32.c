#include<stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d of the array is: %d\n",i,array[i]);
    }
    return 0;
    
}

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d of the array is: %d\n",i,*(ptr+i));
    }
    *(ptr+2)=124;
}

int main()
{
    int arr[]={12,23,53,21};
    //func1(arr);
    func2(arr);
    func2(arr);
    printf("%d",arr[2]);
    return 0;
}