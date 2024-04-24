#include <stdio.h>

int main() 
{
    char text[100];
    char ch;
    int i=0;
    
    printf("Enter any text : ");
    while(ch!='\n')
    {
        scanf("%c",&ch);

        if(ch=='*')
        break;

       /*  if(ch==' ')
        c++; */

        text[i]=ch;
        i++;
    }

    text[i] ='\0';

    printf("Entered text is = %s\n", text);
    printf("Total number of characters is = %d", i);  
  
    

    return 0;
}
