#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    struct Student deep, dhruv, aniket;
    deep.id=1;
    dhruv.id=2;
    aniket.id=3;
    deep.marks=67;
    dhruv.marks=55;
    aniket.marks=50;
    deep.fav_char='p';
    dhruv.fav_char='q';
    aniket.fav_char='r';
    strcpy(deep.name,"Deepanshu");
    strcpy(dhruv.name,"Dhruv");
    strcpy(aniket.name,"Aniket");

    printf("Deepanshu got %d marks\n",deep.marks);
    printf("Deepanshu's name is: %s\n",deep.name);
    printf("Aniket got %d marks\n",aniket.marks);
    printf("Aniket's name is: %s\n",aniket.name);
    

    
    return 0;
}