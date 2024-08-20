#include<stdio.h>
int size,cque[50],front=-1,rear=-1;

void push(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        cque[rear]=x;
    }
    else
    {
        rear=(rear+1)%size;
        cque[rear]=x;
    }
}

int pop()
{
    int t;
    if(front==rear)
    {
        t=cque[front];
        front=rear=-1;
    }
    else
    {
        t=cque[front];
        front=(front+1)%size;
    }
    return t;
}

void display()
{
    printf("The Circular Queue is :\n");
    int i=front;

    while (i!=rear)
    {
        printf("%d | ", cque[i]);
        i=(i+1)%size;
    }
    printf("%d | ", cque[i]);
}

int main()
{
    int item,ch,n=1;
    printf("Enter the size of the stack : ");
    scanf("%d",&size);
    while(n!=0)
    {
        printf("\nPress 1 for Enqueue");
        printf("\nPress 2 for Dequeue");
        printf("\nPress 3 for Display");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 :
            if((rear+1)%size==front)
            printf("Circular Queue Is Full");
            else
            {
                printf("Enter the element to insert : ");
                scanf("%d",&item);
                push(item);
            }  
            break;

            case 2:
            if(front==-1 && rear==-1)
                printf("Circular Queue is Empty");
            else
                printf("Deleted Element is = %d",pop());
            break;

            case 3: 
            if(front==-1 && rear==-1)
                printf("Circular Queue is Empty");
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