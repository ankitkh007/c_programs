#include<stdio.h>

int main()
{
    struct student
    {
        char branch[30];
        char name[20];
        int roll_no;

        struct marks
        {
            int sub1;
            int sub2;
            int sub3;
            int sub4;
            int sub5;
            int sub6;
            int sub7;
            int sub8;
        }mar;
    };
    
    
    
    struct student stud[5];

    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the Branch:");
        scanf("%s",&stud[i].branch);
        printf("\nEnter the Name:");
        scanf("%s",&stud[i].name);
        printf("\nEnter the Roll No.:");
        scanf("%d",&stud[i].roll_no);
        printf("\nEnter the marks in 8 subjects :");
        printf("\nSubject 1:");
        scanf("%d",&stud[i].mar.sub1);
        printf("\nSubject 2:");
        scanf("%d",&stud[i].mar.sub2);
        printf("\nSubject 3:");
        scanf("%d",&stud[i].mar.sub3);
        printf("\nSubject 4:");
        scanf("%d",&stud[i].mar.sub4);
        printf("\nSubject 5:");
        scanf("%d",&stud[i].mar.sub5);
        printf("\nSubject 6:");
        scanf("%d",&stud[i].mar.sub6);
        printf("\nSubject 7:");
        scanf("%d",&stud[i].mar.sub7);
        printf("\nSubject 8:");
        scanf("%d",&stud[i].mar.sub8);
    }
    printf("***********Details***********");
    for(i=0;i<5;i++)
    {
        
        printf("\nBranch = %s",stud[i].branch);
        printf("\nName = %s",stud[i].name);
        printf("\nRoll NO. = %d",stud[i].roll_no);
        printf("\n Marks Obtained : ");
        printf("\n Subject 1 = %d",stud[i].mar.sub1);
        printf("\n Subject 2 = %d",stud[i].mar.sub2);
        printf("\n Subject 3 = %d",stud[i].mar.sub3);
        printf("\n Subject 4 = %d",stud[i].mar.sub4);
        printf("\n Subject 5 = %d",stud[i].mar.sub5);
        printf("\n Subject 6 = %d",stud[i].mar.sub6);
        printf("\n Subject 7 = %d",stud[i].mar.sub7);
        printf("\n Subject 8 = %d",stud[i].mar.sub8);
    }
    
    return 0;
}