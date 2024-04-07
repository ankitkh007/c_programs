#include<stdio.h>

int main()
{
    int i=1,j;

    while(i<=8)
    {
        if(i%2==0)
        {   
            j=1;
            while(j<=8)
            {
                if(j%2!=0)
                {
                    printf("0 \t");
                }
                else
                {
                    printf("1 \t");
                }
                j++;
            }
        }

        else
        {   
            j=1;
            while (j<=8)
            {
                if(j%2!=0)
                {
                    printf("1 \t");
                }
                else
                {
                    printf("0 \t");
                }
                j++;
            }
            
        }
        printf("\n");
        i++;
    }
    return 0;
}