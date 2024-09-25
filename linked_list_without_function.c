#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

int main()
{
    int n,x;
    struct node *ptr,*s;

    printf("Enter the number of nodes you want : ");
    scanf("%d",&n);

    while(n!=0)
    {
        //Creating blank node
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter new node value : ");
        scanf("%d",&x);

        ptr->data=x;
        ptr->next=NULL;

        if(head==NULL)
        head=ptr;
        else
        {
            s=head;
            while(s->next!=NULL)
            s=s->next;
            s->next=ptr;
        }

        n--;
    }

    //Display Linked List
    printf("THE LINKED LIST IS : ");
    s=head;
    while(s!=NULL)
    {
        printf("\t%d : %p",s->data,&s->data);
        s=s->next;
    }    

    return 0;
}