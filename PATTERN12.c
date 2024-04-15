#include<stdio.h>

int main()
{
    int i,j,k,l,p=0;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=1;k<=p;k++)
        {
            printf("* ");
        }

        for(l=i;l>=1;l--)
        {
            printf("%d ",l);
        }
        p+=2;
        printf("\n");
    }

    return 0;
}