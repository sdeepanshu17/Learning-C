#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    printf("For Loops\n");

    for ( i = 0, j = 0; i < 5; i++, j=j+2)
    {
        printf("%d %d\n",i,j);
    }
    
    return 0;
}
