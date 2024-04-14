#include<stdio.h>

int main()
{
    int i,j,n,c=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("ALL THE PRIME NUMBERS PRESENT BETWEEN 1 AND %d are :\n",n);

    for (i=1;i<=n;i++)
    {
        c=0;
        for (j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        
        if(c==2)
        printf("%d ",i);

    }
    return 0;
    
}