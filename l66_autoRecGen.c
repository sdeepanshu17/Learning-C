#include <stdio.h>
#include <string.h>

// You have to fill in values to a template letter.txt
// Letter.txt looks something like this:
// Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
// Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
// You have to read this file and replace these values:
// {{name}}   - Harry
// {{item}}   - Table Fan
// {{outlet}} - Ram Laxmi fan outlet

// Use file functions in c to accomplish the same

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Receipts.txt", "r");
    char ch;
    char content[50];

    FILE *newptr = NULL;
    newptr = fopen("CustReceipt.txt", "w");

    while (ch != EOF)
    {
        fscanf(ptr, "%s", content);
        printf("%s ", content);

        if (strcmp(content, "{name}") == 0)
        {
            fprintf(newptr, "%s", "Deepanshu ");
        }
        else if (strcmp(content, "{item}") == 0)
        {
            fprintf(newptr, "%s", "Fan ");
        }
        else if (strcmp(content, "{outlet}") == 0)
        {
            fprintf(newptr, "%s", "in Dwarka ");
        }
        else
        {
            fprintf(newptr, "%s", content);
            fprintf(newptr, "%s", " ");
        }

        // printf("%c",ch);
        ch = fgetc(ptr);
        if (ch == '\n')
        {
            printf("\n");
        }
    }

    fclose(ptr);
    fclose(newptr);

    return 0;
}