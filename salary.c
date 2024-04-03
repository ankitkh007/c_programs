#include<stdio.h>

int main()
{
    float salary,bonus; char c;
    printf("Enter the Gender of the worker 'M' for Male and 'F' for Female : ");
    scanf("%c",&c);
    printf("Enter the salary of the worker: ");
    scanf("%f",&salary);
    

    if (c=='M')
    {
        if(salary<10000)
        {
            bonus=0.07*salary;
            printf("The Total Salary is = %f", (salary+bonus));
        }
        else
        {   
            bonus=0.05*salary;
            printf("The Total Salary is = %f",(salary+bonus));
        }
    }

    else if (c=='F')
    {
        if(salary<10000)
        {
            bonus=0.12*salary;
            printf("The Total Salary is = %f", (salary+bonus));
        }
        else
        {
            bonus=0.1*salary;
            printf("The Total Salary is = %f",(salary+bonus));
        }
    }

    else
    {
        printf("Wrong Input");
    }
    
    return 0;

}