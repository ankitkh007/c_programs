#include<stdio.h>

int main()
{
    int p=10,q=7;

    for (int i=1; i<=5; i++)
    {
        for (int k=q; k>=1; k--)
        {
            printf("\t");
        }
        q--;
        for (int j=1;j<=i;j++)
        {   
            printf("* \t");
        }
        printf("\n");
        
    }
    
    for (int i=1; i<=5; i++)
    {

         for(int k=1;k<i;k++)
        {
            printf("\t");          
        }
        

        for(int j=p;j>=1;j--)
        {
            printf("* \t");
        }
        p=p-2;
        
        printf("\n");


       
    }

    for (int i=1; i<=4; i++)
    {   
        for (int j=1; j<=10; j++)
        {
            printf("# \t");
        }
        
        printf("\n");
    }
    

    return 0;
    
}