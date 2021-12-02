#include<stdio.h>
#include<string.h>

/*

OPENING A FILE - CREATING OR EDITING A FILE
stdio.h contains a function called fopen() for opening files in C.
The syntax for opening a file in standard I/O is:
        ptr = fopen ("fileopen", "mode")
        modes: r- to read; w- to write; a - to add data ; r+ ; w+ ; rb - read binary
For Example:
        fopen("E://Codellharry.txt",."W"):
        fopen("E://Programminglibhai.bin","rb");

CLOSING A FILE
Any file which is opened in a C program needs to be closed
Closing a file is accomplished by the library function fclose()
close(fptr); //fptr is the file pointer associated with file to be closed


READING A FILE
In order to read a file, we can use fscanf function.
Syntax:
        fscanf(ptr, "%s", string);
This function is file version of scan function
fscanf expects a file pointer in addition to the other arguments which scanf expects
We will have to open the file in read mode in order to use this function


WRITING TO A FILE
In order to write to a file, we can use fprintf function.
Syntax:
        fprintf(ptr, "%s", string);
This function is file version of print function
fprintf expects a file pointer in addition to the other arguments which printf expects
We will have to open the file in write mode in order to use this function

*/


int main()
{
    FILE *ptr = NULL;
    char string[50]= "Hello";

    // ****** Reading a File *****
    // ptr = fopen("myFile.txt","r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file is: \n%s\n", string);


    //***** WRITING TO A FILE *****
    ptr = fopen("myFile.txt", "a");
    fprintf(ptr, "%s", string);
    printf("Content Written!!\n");

    return 0;
}