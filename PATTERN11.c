#include<stdio.h>

void pattern(int n)
{
    int i,j;
    for(i=65;i<=(65+n);i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c ",i);
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