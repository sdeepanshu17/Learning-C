#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    char ch='y';
    while (ch=='y')
    {
        srand(time(NULL));
        int randomno=rand()%100;
        int displayno=rand()%100;
        int choice;

        printf("******Welcome to High Low******\n");
        printf("Your hint is: %d\n",displayno);
        printf("To choose lower, press 1\n");
        printf("To choose jackpot, press 2\n");
        printf("To choose upper, press 3\n");
        printf("Enter your choice: ");
        scanf("%d", &choice );

        if (choice==1 && randomno<displayno)
        {
            printf("You WIN!! The hidden number was %d\n",randomno);
        }
        else if (choice==2 && randomno==displayno)
        {
            printf("JACKPOT. The hidden number was also %d\n",randomno);
        }
        else if (choice==3 && randomno>displayno)
        {
            printf("You WIN!! The hidden number was %d\n",randomno);
        }
        else
        {
            printf("You lost. The hidden number was %d\n", randomno);
        }

        printf("Do you want to play again(y/n): ");
        scanf("%s", &ch );
        getchar();
        printf("\n");

        if (ch=='n')
        {
            break;
        }
        
    }
    
    

    return 0;
}