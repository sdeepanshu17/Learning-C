#include<stdio.h>
#include<string.h>

int main()
{
    char content[4]="\0";
    // char c2[4]="0";
    printf("%d\n",strcmp(content,"\0"));
    if (strcmp(content,"\0")==0)
    {
        printf("OK\n");
    }
    

    return 0;
}