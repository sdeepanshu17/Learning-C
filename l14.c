#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int i = 1;
    printf("While Loops\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    while (i <= a)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
