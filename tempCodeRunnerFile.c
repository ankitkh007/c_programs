#include<stdio.h>

void add(float a, float b)
{
    printf("The Addition of %f and %f is = %f",a,b,(a+b));
}

void sub(float a,float b)
{
    printf("The Subtraction of %f and %f is = %f",a,b,(a-b));
}

void mul(float a,float b)
{
    printf("The Multiplication of %f and %f is = %f",a,b,(a*b));
}

void div(float a,float b)
{
    printf("The Division of %f and %f is = %f",a,b,(a/b));
}


int main()
{
    int n;
    float a,b;
    printf("Enter your choice :\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    scanf("%d",&n);

    


    switch (n)
    {
        case 1:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b);
        add(a,b);
        break;
        
        case 2:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b); 
        sub(a,b);
        break;
        
        case 3:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b); 
        mul(a,b);
        break;
        
        case 4:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b); 
        div(a,b);
        break;
        
        default: printf("Wrong Choice");
        break;
    }
    return 0;
}