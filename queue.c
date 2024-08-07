#include<stdio.h>
int size,que[50],front=-1,rear=-1;

void push(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        que[rear]=x;
    }
    else
    que[++rear]=x;
}

int pop()
{
    if(front==rear)
    {
        int t=que[front];
        front=rear=-1;
        return t;
    }
    else
    return que[front++];
}

void display()
{
    printf("The Queue is :\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d | ",que[i]);
    }
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
            if(rear==size-1)
            printf("Queue Is Full");
            else
            {
                printf("Enter the element to insert : ");
                scanf("%d",&item);
                push(item);
            }  
            break;

            case 2:
            if(front==-1 && rear==-1)
                printf("Queue is Empty");
            else
                printf("Poped Element is = %d",pop());
            break;

            case 3: 
            if(front==-1 && rear==-1)
                printf("Queue is Empty");
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