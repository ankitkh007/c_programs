#include<stdio.h>

void add()
{   
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);

    printf("The Addition of %f and %f is = %f",a,b,(a+b));
}

void sub()
{
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);

    printf("The Subtraction of %f and %f is = %f",a,b,(a-b));
}

void mul()
{
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    
    printf("The Multiplication of %f and %f is = %f",a,b,(a*b));
}

void div()
{
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);

    printf("The Division of %f and %f is = %f",a,b,(a/b));
}


int main()
{
    int n;
    printf("Enter your choice :\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    scanf("%d",&n);

    switch (n)
    {
        case 1: add();
        break;
        case 2: sub();
        break;
        case 3: mul();
        break;
        case 4: div();
        break;
        default: printf("Wrong Choice");
        break;
    }
    return 0;
}