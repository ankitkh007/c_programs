#include<stdio.h>

void pattern(int n)
{
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        k=i;
        for(j=1;j<=n;j++)
        {
            if(k<=5)
            printf("%d ",k);
            else
            printf("5 ");
            k++;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the no. of Lines : ");
    scanf("%d",&n);

    pattern(n);

    return 0;
}