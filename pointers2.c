#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of 'a' : ");
    scanf("%d",&a);

    int *ptr1=&a; //Pointer
    int **ptr2=&ptr1; //Pointer to Pointer
    int *ptr3=ptr1; //Pointer to Pointer variable

    printf("\nThe address of 'a' is = %d",&a);
    printf("\nThe address of 'a' using ptr1 is = %d",ptr1);
    printf("\nThe address of 'a' using ptr2 is = %d",*ptr2);
    printf("\nThe address of 'a' using ptr3 is = %d",ptr3);

    printf("\n\nThe value of 'a' using ptr1 is = %d",*ptr1);
    printf("\nThe value of 'a' using ptr2 is = %d",**ptr2);
    printf("\nThe value of 'a' using ptr3 is = %d",*ptr3);
    
    return 0;
}