#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n;
    for (int i = 1; i < 4; i++)
    {
        printf("Enter number of characters in your EId:\n");
        scanf("%d", &n);

        ptr = (char *)malloc((n+1) * (sizeof(char)));
        printf("Enter your EId:");
        scanf("%s", ptr);
        printf("Employee %d's ID: %s\n",i, ptr);
        free(ptr);  
    }
    
    

    return 0;
}