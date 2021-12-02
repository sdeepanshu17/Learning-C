#include<stdio.h>

// 0 1 1 2 3 5 8 13

/*
int fibn(num){
    if (num==1 || num==2)
    {
        return num-1;
    }
    else
    {
        return (fibn(num-1)+fibn(num-2));
    }    
}
*/



int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number: \n");
    scanf("%d",&n);

    // printf("%d\n",fibn(n));

    int a=0,b=1,c;

    for (int i = 0; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    
    

    printf("%d",c);

    return 0;
}

