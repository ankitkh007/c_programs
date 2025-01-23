#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_last()
{
    int k;
    struct node *s,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter new node value : ");
    scanf("%d",&k);

    ptr->data=k;
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
}

void insert_first()
{
    int k;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter new node value : ");
    scanf("%d",&k);

    ptr->data=k;
    ptr->next=head;
    head=ptr;
}

void display()
{
    struct node *s;
    s=head;

    while(s!=NULL)
    {
        printf("\t%d",s->data);
        s=s->next;
    }
}

void insert_after_node_value()
{
    int k,x,f=0;
    struct node *s,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter new node value : ");
    scanf("%d",&k);

    printf("Enter the node value after which you want to insert : ");
    scanf("%d",&x);

    ptr->data=k;

    s=head;

    while(s->data!=x)
    {
        s=s->next;
        if(s==NULL)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Node value does not exist");
        free(ptr);
    }
    else
    {
        ptr->next=s->next;
        s->next=ptr;
    }
}

void insert_before_node_value()
{
    int k,x,f=0;
    struct node *s,*w,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter new node value : ");
    scanf("%d",&k);

    printf("Enter the node value before which you want to insert : ");
    scanf("%d",&x);

    ptr->data=k;

    if(head->data==x)
    {
        ptr->next=head;
        head=ptr;
    }
    else
    {
        w=head;
        s=head->next;

        while(s->data!=x)
        {
            s=s->next;
            w=w->next;
            if(s==NULL)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("Node value does not exist");
            free(ptr);
        }
        else
        {
            ptr->next=s;
            w->next=ptr;
        }
    }

    
}

int main()
{
    int ch,n=1;
    while(n!=0)
    {
        printf("\nPress 1 for insert last");
        printf("\nPress 2 for insert first");
        printf("\nPress 3 to Display");
        printf("\nPress 4 insert after a node value");
        printf("\nPress 5 insert before a node value");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert_last();
                    break;
            case 2: insert_first();
                    break;
            case 3: display();
                    break;
            case 4: insert_after_node_value();
                    break;
            case 5: insert_before_node_value();
                    break;
            default: printf("\nWRONG CHOICE");
        }

        printf("\nPress 1 to Continue Else Press 0 : ");
        scanf("%d",&n);
    }
}