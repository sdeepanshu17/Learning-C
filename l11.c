#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    
    printf("Using Switch\n");
    printf("Enter your age: ");
    scanf("%d",&age);

    switch (age)
    {
    case 18:
        printf("Your age is 18");
        break;

    case 21:
        printf("Your age is 21");
        break;
    
    default:
    printf("Your age is not 18 or 21");
        break;
    }
    return 0;
}
