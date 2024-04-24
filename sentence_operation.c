#include<stdio.h>

void check(char str[])
{
    int i,space=0,vowels=0,consonants=0,digits=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        space++;

        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        vowels++;

        if(str[i]!=' ' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        consonants++;

        if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='0')
        digits++;
    }

    printf("Total number of Words is = %d",space+1);
    printf("\nTotal number of Vowels is = %d",vowels);
    printf("\nTotal number of Consonants is = %d\n",consonants-digits);
    printf("Total number of Digits is = %d",digits);
    printf("\nTotal white Spaces is = %d",space);
}

int main()
{
    char str[100];
    printf("Enter any Sentence :");
    gets(str);

    check(str);
    
    return 0;
}