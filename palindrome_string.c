#include<stdio.h>
#include<string.h>

int palindrome(char str[])
{
    int a=0;
    int b=strlen(str)-1;

    while(a<b)
    {
        if(str[a]!=str[b])
        {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);
   
    if(palindrome(str))
    printf("%s is a Palindrome String.",str);
    else
    printf("%s is not a Palindrome String.",str);
    return 0;
}