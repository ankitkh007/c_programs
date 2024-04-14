#include<stdio.h>

int main()
{
    int year;
    printf("Enter any Year : ");
    scanf("%d",&year);

    if(year%4==0 && (year%100!=0 || year%400==0))
    printf("%d Is a Leap Year", year);

    else
    printf("%d Is not a Leap Year", year);

    return 0;
}