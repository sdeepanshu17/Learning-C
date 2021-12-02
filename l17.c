#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Go To Statement\n");
    int a=1;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",i);
        printf("Enter 0 to exit: \n");
        scanf("%d",&a);
        if (a==0)
        {
            goto end;
        }
        
    }

    end: 
    
    return 0;
}
