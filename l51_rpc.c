#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int plscore;
int cmscore;

int plchoice;
int cmchoice;
char *name;
char cmc;

char genRandomNumber()
{
    srand(time(NULL));  //srand takes seed as an input and is defined inside stdlib.h
    cmchoice=rand()%3;

    if (cmchoice==0)
    {
        cmc='r';
    }
    else if (cmchoice==1)
    {
        cmc='p';
    }
    else if (cmchoice==2)
    {
        cmc='s';
    }
    

    return cmc;
}

/*
rock-0
paper-1
scissor-2

*/

void chance()
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("For rock enter 0, ");
        printf("For paper enter 1, ");
        printf("For scissors enter 2\n");
        printf("Your Turn, please enter a number\n");
        scanf("%d", &plchoice);
        printf("\n");
        printf("The computer chose %c\n", genRandomNumber());
        
        if ((plchoice==0 && cmchoice==0) || (plchoice==1 && cmchoice==1) || (plchoice==2 && cmchoice==2))
        {
            printf("Tie\n");
        }

        if ((plchoice==0 && cmchoice==2) || (plchoice==1 && cmchoice==0) || (plchoice==2 && cmchoice==1))
        {
            printf("%s won this round\n",name );
            plscore++;
        }

        if ((plchoice==2 && cmchoice==0) || (plchoice==0 && cmchoice==1) || (plchoice==1 && cmchoice==2))
        {
            printf("Computer won this round\n");
            cmscore++;
        }

        printf("\n");
        printf("%s's score: %d\n",name,plscore);
        printf("Computer's score: %d\n", cmscore);
    }
    

    if (cmscore>plscore)
    {
        printf("Computer Won\n");
    }

    else if (plscore>cmscore)
    {
        printf("%s Won\n",name);
    }
    
    else
    {
        printf("TIE\n");
    }
    
    
}


int main()
{
    // printf("A random number between 0 to 100 is %d\n", genRandomNumber());
    
    name=(char *)malloc(56*(sizeof(char)));
    printf("Enter your name: ");
    scanf("%s",name);
    getchar();
    printf("~~Welcome to Rock Paper Scissors, %s~~\n",name);
    chance();
    return 0;
}