#include<stdio.h>

//call by value
void area(int n)
{
    n=n*n;
    printf("Area = %d\n",n);
}

//call by reference
void area2(int *n)
{
    *n=(*n) * (*n);
    printf("Area2 = %d\n",*n);

}
int main()
{
    /* float price=200.00;
    float *ptr=&price;
    float **pptr=&ptr; */


    /* int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr); */

    int number=4;
    area(number);
    printf("Number = %d\n",number);

    area2(&number);
    printf("Number2 = %d\n",number);

    return 0;
        

}