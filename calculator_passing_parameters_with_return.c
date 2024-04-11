#include<stdio.h>

float add(float a, float b)
{
    return(a+b);
}

float sub(float a,float b)
{
    return(a-b);
}

float mul(float a,float b)
{
    return(a*b);
}

float div(float a,float b)
{
    return(a/b);
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

        printf("The Addition of %f and %f is = %f",a,b,(add(a,b)));
        break;
        
        case 2:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b); 
        
        printf("The Subtraction of %f and %f is = %f",a,b,(sub(a,b)));
        break;
        
        case 3:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b); 
        
        printf("The Multiplication of %f and %f is = %f",a,b,(mul(a,b)));
        break;
        
        case 4:printf("Enter the first number:");
        scanf("%f",&a);
        printf("Enter the second number:");
        scanf("%f",&b); 
    
        printf("The Subtraction of %f and %f is = %f",a,b,(div(a,b)));
        break;
        
        default: printf("Wrong Choice");
        break;
    }
    return 0;
}