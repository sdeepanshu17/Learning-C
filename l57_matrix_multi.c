#include<stdio.h>

int arr[10][10];
//arr[m1r][m2c]
void input_calc(int m1r,int m1c,int m2r,int m2c)
{
    int m1[m1r][m1c], m2[m1r][m2c];
    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m1c; j++)
        {
            printf("Enter element of Matrix 1 at R%d and C%d: ",i,j);
            scanf("%d", &m1[i][j] );
        }       
    }

    for (int i = 0; i < m2r; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("Enter element of Matrix 2 at R%d and C%d: ",i,j);
            scanf("%d", &m2[i][j] );
        } 
    }


    //Multiplication
    for (int i = 0; i < m1r ; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            int temp=0;
            for (int k = 0; k < m1c; k++)
            {
                temp=temp+(m1[i][k]*m2[k][j]);
            }
            arr[i][j]=temp;
            
        }  
    }

    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    
}

int main()
{  
    int m1_r, m1_c, m2_r, m2_c; 
    printf("Enter number of rows in Matrix 1: ");
    scanf("%d", &m1_r);
    printf("Enter number of columns in Matrix 1: ");
    scanf("%d", &m1_c);
    printf("Enter number of rows in Matrix 2: ");
    scanf("%d", &m2_r);
    printf("Enter number of columns in Matrix 2: ");
    scanf("%d", &m2_c);

    if (m1_c!=m2_r)
    {
        printf("The matrices cannot be multiplied!!\n");
    }
    else
    {
        input_calc(m1_r,m1_c,m2_r,m2_c);
    }
    

    
    return 0;
}