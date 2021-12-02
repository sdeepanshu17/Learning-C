#include <stdio.h>
#include "temp.c"

/*
1.AUTOMATIC VARIABLES: AUTO STORAGE CLASS
Scope: Local to the function body they are defined in
Default Value: Garbage value (a random value)
Lifetime: Till the end of the function block they are defined in
A variable defined without any storage class specification is by default an automatic variable
int harry and auto int harry are same

2.EXTERNAL VARIABLES: EXTERNAL STORAGE CLASS
They are same as global variables
Scope: Global to the program they are defined in
Default Initial Value: 0
Lifetime: These variables are declared outside any function. They are available throughout the lifetime of the
program.
A global variable can be changed by any function in the program.
int harry written outside any function will tell compiler that harry is a global variable.
It is recommended to minimize the use of unnecessary global variables in a program.

3.EXTERNAL VARIABLES: EXTERN VARIABLE
extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
Using extern will not allocate space for the variable

4.STATIC VARIABLES: STATIC STORAGE CLASS
Scope: Local to the block they are defined in
Default Initial Value: 0
Lifetime: They are available throughout the lifetime of the program.
A static variable remains under existence for use within the function for entire program run.
static int harry written inside any function will tell compiler that harry is a static variable.
It is recommended to minimize the use of unnecessary static variables in a program.

5.REGISTER VARIABLES: REGISTER STORAGE CLASS
Scope: Local to the function they are declared in
Default Initial Value: Garbage value
Lifetime: They are available till the end of the function block, in which the variable is defined.
Register variables requests the compiler to store the variable in the CPU register instead of storing in the memory to have faster access.
Generally this is done for the variables which are being used frequently

*/

// int myfunc(int a, int b)
// {
//     int sum;
//     sum = a + b;
//     return sum;
// }

int main()
{
    // Declaration: Telling the compiler about the variable (No space reserved)
    // Definition: Declaration + Space reservation

    // int sum = myfunc(3, 5);
    int sum=45;
    printf("The sum is %d\n", sum);

    return 0;
}


