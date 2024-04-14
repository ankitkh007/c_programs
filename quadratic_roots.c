#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x,d,root1,root2;

    printf("Enter the calue of a : ");
    scanf("%f",&a);
    printf("Enter the calue of b : ");
    scanf("%f",&b);
    printf("Enter the calue of c : ");
    scanf("%f",&c);

    d= (b*b - 4*a*c);

    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);

    if(a==0 && b==0)
    printf("There is NO SOLUTION");

    else if(a==0)
    {
        x=(-c/b);
        printf("There is ONLY ONE ROOT\n");
        printf("The ROOT IS = %f",x);
    }

    else if(d>0)
    {
        printf("There ARE TWO REAL ROOTS\n");
        printf("The ROOTS ARE = %f,%f",root1,root2);
    }

    else
    {
        printf("THERE ARE NO REAL ROOTS");
    }

    return 0;

}