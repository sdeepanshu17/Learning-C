#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "deep";
    char s2[] = "harry";
    char s3[54];
    printf("The strcmp for s1,s2 returned: %d\n",strcmp(s1,s2));
    // puts(strcat(s1,s2));
    printf("The length of s1 is: %d\n", strlen(s1));
    printf("The length of s2 is: %d\n", strlen(s2));

    strcpy(s3,s1);
    puts(s3);

    return 0;
}