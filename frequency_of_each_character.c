#include<stdio.h>
#include<string.h>

void frequency(char str[])
{
    int i,j,c=0;
    char ch;
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        ch=str[i];
        
        c=0;   
        for(j=0;j<l;j++)
        {
            if(i<j)
            {
                if(str[i]==str[j])
                continue;
            }
            if(str[i]==str[j])
            c++;
        }
        printf("The frequency of '%c' is = %d\n",ch,c);
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
