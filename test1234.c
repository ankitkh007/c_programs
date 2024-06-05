#include<stdio.h>
#include<string.h>

void frequency(char str[])
{
    int i,j,k,m=0,c=0;
    char ch;
    int l=strlen(str);

    for(i=0;i<l;i++)
    {
        ch=str[i];

        m=0;
        for(k=i-1;k>0;k--)
        {
            if(str[k]==ch)
            m++;
        }

        if(m>0)
        continue;

        else
        {   
            c=0;
            for(j=0;j<l;j++)
            {
                if(str[j]==ch)
                c++;
            }
        }
        printf("\nThe Frequency of '%c' is = %d",ch,c);
    }
}

int main()
{
    char str[100];
    printf("Enter your name: ");
    gets(str);

    frequency(str);
    //printf("%s",str);
    return 0;
}