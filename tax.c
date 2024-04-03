#include<stdio.h>

int main()
{
    float salary;
    printf("Enter your Salary : ");
    scanf("%f",&salary);

    if (salary<=150000)
    {
        printf("NO TAX");
    }
    else if (salary>=150001 && salary<=300000)
    {
        printf("TAX = %f",(0.1*salary));
    }

    else if (salary>=300001 && salary<=500000)
    {
        printf("TAX = %f", (0.2*salary));
    }

    else
    {
        printf("TAX = %f",(0.3*salary));
    }    
    return 0;
    
}