#include<stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    // typedef <prev_name> <alias_name>;
    // typedef unsigned long ul;
    // ul l1,l2,l3;
    // return 0;

    // std s1,s2;
    // s1.id=1;
    // s2.id=2;

    // printf("s1's ID is: %d\n",s1.id);
    // printf("s2's ID is: %d\n",s2.id);

    typedef int* intPtr;
    intPtr a,b;
    int c=34;
    a=&c;
    b=&c;
}