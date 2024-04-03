#include<stdio.h>

int main()
{
    char item1[20], item2[20];
    float quantity1,quantity2,price1,price2,amount1=0.0,amount2=0.0;

    printf("Enter the name of the First Item purchased : ");
    gets(item1);
    printf("Enter the Quantity Purchased in Kg : ");
    scanf("%f",&quantity1);
    printf("Enter the price of the item per Kg : ");
    scanf("%f",&price1);
    fflush(stdin);
    printf("Enter the name of the Second Item purchased : ");
    gets(item2);

    printf("Enter the Quantity Purchased in Kg : ");
    scanf("%f",&quantity2);
    printf("Enter the price of the item per Kg : ");
    scanf("%f",&price2);
    printf("\n");
    amount1=quantity1 * price1;
    amount2=quantity2 * price2;

    //printf("%f %f", amount1,amount2);

    printf("***********************BILL***********************\n");
    printf("**************************************************\n");
    printf("ITEM NAME \t ITEM QUANTITY \t PRICE OF THE ITEM PER Kg \t AMOUNT\n");
    printf("%s \t\t %f \t\t %f \t\t %f\n",item1,quantity1,price1,amount1);
    printf("%s \t\t %f \t\t %f \t\t %f\n",item2,quantity2,price2,amount2);

    printf("**************************************************\n");
    printf("**************************************************\n");

    printf("TOTAL AMOUNT TO BE PAID = %f\n",(amount1+amount2));

    printf("**************************************************\n");
    printf("**************************************************\n");

    return 0;
}