#include<stdio.h>

void pattern(int n)
{
    int i,j,k=(n*2-1);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("* ");
        }
        k-=2;
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