#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int result;

    printf("If you have passed in maths press 1\n");
    printf("If you have passed in science press 2\n");
    printf("If you passed in both maths and science press 3\n:");
    scanf("%d",&result);

    if (result==3)
    {
        printf("45");
    }
    else if(result==1 || result==2)
    {
        printf("15");
    }
    

    return 0;
}
