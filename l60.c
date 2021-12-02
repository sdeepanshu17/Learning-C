#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}