#include<stdio.h>

void frequency(char str[],char ch)
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        c++;
    }

    printf("The frequency of '%c' is = %d",ch,c);
}

int main()
{
    char str[100],ch;

    printf("Enter your Full Name : ");
    gets(str);

    printf("Enter the character to check the frequency : ");
    scanf("%c",&ch);

    frequency(str,ch);
    
    return 0;

}
