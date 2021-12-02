#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
    if (strcmp(argv[1],"add")==0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        // printf("%d\n",a);
        // printf("%d\n",b);
        printf("%d\n",a+b);
    }
    if (strcmp(argv[1],"subtract")==0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        // printf("%d\n",a);
        // printf("%d\n",b);
        printf("%d\n",a-b);
    }
    if (strcmp(argv[1],"multiply")==0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        // printf("%d\n",a);
        // printf("%d\n",b);
        printf("%d\n",a*b);
    }
    if (strcmp(argv[1],"divide")==0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        // printf("%d\n",a);
        // printf("%d\n",b);
        printf("%d\n",a/b);
    }
    
    return 0;
}
