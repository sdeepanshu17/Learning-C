#include<stdio.h>

/*
MODE & DESCRIPTION
Mode            Description

r               Opens an existing text file for reading

w               Opens a file for writing. If it doesn't exist, then a new file is 
.               created. Writing starts from the beginning of the file.

a               Opens a text file for writing in appending mode. If it does notexist, 
.               then a new file is created. The program will start appending content to the existing 
.               file content.

r+              This mode will open a text file for both reading and writing

w+              Opens a text file for both reading and writing. It first truncates
.               the file to zero length if it exists, otherwise creates a file if it
.               does not exist.

a+              Opens a text file for both reading and writing. It creates the file
.               if it does not exist. The reading will start from the beginning but
.               writing can only append to file.



FPUTC FUNCTION IN C
Simplest function to write characters to a file is fputc
Syntax of fputc goes as follows:
    int fputc( character, FILE pointer );
It returns the written character written on success
On failure it returns EOF
The EOF is a constant defined in the header file stdio.h.


FPUTS IN C
fputs function is used to write a null terminated string to a file in c
int fputs( const char *s, FILE *fp ):


FGETC FUNCTION IN C
Simplest function to read characters from a file is fgetc
Syntax of fgetc goes as follows:
    int fgetc( FILE * fp);
It returns the read character on success.
On failure it returns EOF
The OF is a constant defined in the header file stdio.h.


GETS IN C
fgets function is used to read a null terminated string to a file in c
int fgets( const char *s, int n, FILE *fp );
*/


int main()
{
    FILE * ptr = NULL;
    ptr = fopen("myFile.txt", "w");
    
    // char c  = fgetc(ptr);
    // printf("the char i read was %c\n", c);
    // c  = fgetc(ptr);
    // printf("the char i read was %c\n", c);

    // char str[34];
    // fgets(str, 10, ptr);
    // printf("I read: %s\n",str);

    fputc('H', ptr);
    fputs(" This is a line", ptr);

    fclose(ptr);
    return 0;
}