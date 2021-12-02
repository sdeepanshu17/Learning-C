#include<stdio.h>
#include<string.h>

int main()
{
    char f1[30];
    char f2[30];
    printf("Enter name of friend1: ");
    gets(f1);
    printf("Enter name of friend2: ");
    gets(f2);

    printf("%s is a friend of %s\n",f1,f2);

    puts(strcat(f1,f2));

    return 0;
}