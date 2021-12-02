#include<stdio.h>
#include<math.h>


int isPalindrome(int a)
{   
    int og=a;
    int temp=0;
    int b;
    int i=0;
    while (a>=1)
    {
        b=a%10;
        temp=temp+(b)*(pow(10,i));
        i++;
        a=a/10;
        printf("Temp: %d\n",temp);
        printf("A: %d\n",a);
    }
    if (og==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int number;
    printf("Enter a number to checker whether it is a palindrome: ");
    scanf("%d", &number);

    if (isPalindrome(number))
    {
        printf("%d is a palindrome\n", number);
    }
    else
    {
        printf("%d is not a palindrome\n", number);
    }
    

    return 0;
}