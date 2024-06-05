#include<stdio.h>
#include<string.h>

void frequency(char str[])
{
    int i,j,k,c=0,m=0;
    char ch;
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        ch=str[i];
        m=0;
        for(k=i-1;k>=0;k--)
        {
            if(ch==str[k])
            m++;
        }

        if(m>0)
        continue;
        else
        {
        c=0;   
        for(j=0;j<l;j++)
        {
            if(str[i]==str[j])
            c++;
        }
        printf("The frequency of '%c' is = %d\n",ch,c);
        }
    }

    
}

int main()
{
    char str[100],ch;

    printf("Enter your Full Name : ");
    gets(str);

    frequency(str);
    
    return 0;

}
