#include<stdio.h>

void length(char str[])
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        c++;
    }

    printf("The Length of Your name is = %d",i-c);
}

int main()
{
    char str[100];

    printf("Enter your Full Name : ");
    gets(str);

    
    length(str);
    
    return 0;

}
