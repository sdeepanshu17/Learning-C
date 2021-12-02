#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Do While Loops\n");

    int i = 1;

    do
    {
        printf("%d\n", i);
        i = i + 1;
        /* code */
    } while (i <= 100);

    return 0;
}
