#include<stdio.h>

float calculate(int unit)
{
    float amount=0.0;

    if(unit>=0 && unit<=102)
    amount=unit*5.04;
    
    else if(unit>102 && unit<=180)
    amount=102*5.04 + (unit-102)*6.33;

    else if(unit>180 && unit<=300)
    amount=102*5.04 + 78*6.33 + (unit-180)*7.12;

    else if(unit>300 && unit<=600)
    amount=102*5.04 + 78*6.33 + 120*7.12 + (unit-300)*7.52;

    else if(unit>600 && unit<=900)
    amount=102*5.04 + 78*6.33 + 120*7.12 + 300*7.52 + (unit-600)*7.69;

    else
    amount=1;

    return amount;


}



int main()
{   
    int previous,present,unit=0;
    printf("******************** Electricity Bill Calculator ********************");
    printf("\nEnter the Previous Unit Reading : ");
    scanf("%d",&previous);
    printf("Enter the Present Unit Reading : ");
    scanf("%d",&present);

    unit=present-previous;

    printf("******************** ELECTRICITY BILL ********************");
    printf("\nTotal Units Consumed : %d",unit);

    printf("\nTotal Amount Payable(Approx.) : %f",calculate(unit));




    return 0;
}