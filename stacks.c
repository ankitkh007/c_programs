#include<stdio.h>
int size,st[50],top=-1;

void push(int x)
{
    st[++top]=x;
}

int pop()
{
    int t=st[top];
    top--;
    return t;
}

void display()
{
    printf("The Stack is : ");
    for(int i=top;i>=0;i--)
    {
        printf("\n%d",st[i]);
        printf("\n__");
    }
}

int main()
{
    int item,ch,n=1;
    printf("Enter the size of the stack : ");
    scanf("%d",&size);
    while(n!=0)
    {
        printf("\nPress 1 for Push");
        printf("\nPress 2 for Pop");
        printf("\nPress 3 for Display");
        printf("\nPress 4 to Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 :
            if(top==size-1)
                printf("Stack Overflow");
            else
            {
                printf("Enter the element to push : ");
                scanf("%d",&item);
                push(item);
            }            
            break;

            case 2:
            if(top==-1)
                printf("Stack Underflow");
            else
                printf("Poped Element is = %d",pop());
            break;

            case 3: 
            if(top==-1)
                printf("Stack Empty");
            else
                display();
            break;

            default : printf("Wrong Choice");
        }
        printf("\nTo Continue Press 1 else Press 0 : ");
        scanf("%d",&n);         
    }
    
    return 0;
}