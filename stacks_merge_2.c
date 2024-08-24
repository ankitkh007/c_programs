#include<stdio.h>
int s1,s2,st1[50],st2[50],top1=-1,top2=-1;

//Pushing Elements in Stack 1
void push1(int x)
{
    st1[++top1]=x;
}
//Pushing Elements in Stack 2
void push2(int x)
{
    st2[++top2]=x;
}

//Displaying Elements of Stack 1
void display1()
{
    printf("The Stack 1 is : ");
    for(int i=top1;i>=0;i--)
    {
        printf("\n%d",st1[i]);
        printf("\n__");
    }
}
//Displaying Elements of Stack 2
void display2()
{
    printf("The Stack 2 is : ");
    for(int i=top2;i>=0;i--)
    {
        printf("\n%d",st2[i]);
        printf("\n__");
    }
}

//Merge and Display
void merge_display()
{
    for(int i=top2;i>=0;i--)
    {
        st1[top1+top2+1]=st2[top2--];
    }

    printf("The Merged Stack is : ");
    for(int i=s1+s2-1;i>=0;i--)
    {
        printf("\n%d",st1[i]);
        printf("\n__");
    }
}

int main()
{
    int item,ch,n=1;
    printf("Enter the size of the Stack 1 : ");
    scanf("%d",&s1);
    printf("Enter the size of the Stack 2 : ");
    scanf("%d",&s2);
    while(n!=0)
    {
        printf("\nPress 1 for Push in Stack 1");
        printf("\nPress 2 for Push in Stack 2");
        printf("\nPress 3 to Display Stack 1");
        printf("\nPress 4 to Display Stack 2");
        printf("\nPress 5 to Merge and Display Stack 1 and Stack 2");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 :
            if(top1==s1-1)
                printf("Stack Overflow");
            else
            {
                printf("Enter the element to push : ");
                scanf("%d",&item);
                push1(item);
            }            
            break;

            case 2:
            if(top2==s2-1)
                printf("Stack Overflow");
            else
            {
                printf("Enter the element to push : ");
                scanf("%d",&item);
                push2(item);
            }      
            break;

            case 3: 
            if(top1==-1)
                printf("Stack Empty");
            else
                display1();
            break;

            case 4: 
            if(top2==-1)
                printf("Stack Empty");
            else
                display2();
            break;

            case 5:
            merge_display();
            break;

            default : printf("Wrong Choice");
        }
        printf("\nTo Continue Press 1 else Press 0 : ");
        scanf("%d",&n);         
    }
    
    return 0;
}