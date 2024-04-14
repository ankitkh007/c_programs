#include<stdio.h>

int main()
{
    int n; float cel,far;

    printf("Enter your Choice: \n");
    printf("1: CENTIGRADE TO FARENHEIT\n");
    printf("2: FARENHEIT TO CENTIGRADE\n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Enter the Temperature in Centigrade : ");
        scanf("%f",&cel);

        far=(cel * 9/5)+32;
        printf("In Farenheit the Temperature is = %f",far);
    }

    else if(n==2)
    {
        printf("Enter the Temperature in Farenheit : ");
        scanf("%f",&far);

        cel=(far-32) * 5/9;
        printf("In Centigrade the Temperature is = %f",cel);
    }

    else
    printf("WRONG CHOICE");

    return 0;

}