#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}

int main()
{
    // char name[] = {'d', 'e', 'e', 'p', '\0'};
    // char name2[] = "deep";
    // printStr(name);
    // printf("\n");

    char name[34];
    gets(name);

    // printStr(name);
    printf("Using custom function print str: \n");
    printStr(name);
    printf("\n");
    printf("Using printf: \n");
    printf("%s\n",name);
    printf("Using puts:\n");
    puts(name);

    return 0;
}