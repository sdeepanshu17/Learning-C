#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student s1;
    s1.id = 1;
    strcpy(s1.name,"Deepanshu");
    s1.fav_char = 'i';
    s1.marks = 89;

    printf("The id is %d \n",s1.id);
    printf("The marks is %d \n",s1.marks);
    printf("The fav_char is %c \n",s1.fav_char);
    printf("The name is %s \n",s1.name);
    return 0;
}