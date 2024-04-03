#include<stdio.h>
int main()
{
    int year,days,n;
    printf("Enter the year : ");
    scanf("%d",&year);
    printf("Enter The No. of Days : ");
    scanf("%d",&days);

    //LEAP YEAR
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        if(days>0 && days<=31)
        printf("%d  JANUARY  %d ", days,year);

        else if (days>31 && days <=60)
        printf("%d  FEBRUARY  %d ", (days-31),year);

        else if (days>60 && days <=91)
        printf("%d  MARCH  %d ", (days-60),year);

        else if (days>91 && days <=121)
        printf("%d  APRIL  %d ", (days-91),year);

        else if (days>121 && days <=152)
        printf("%d  MAY  %d ", (days-121),year);

        else if (days>152 && days <=182)
        printf("%d  JUNE  %d ", (days-152),year);

        else if (days>182 && days <=213)
        printf("%d  JULY  %d ", (days-182),year);

        else if (days>213 && days <=244)
        printf("%d  AUGUST  %d ", (days-213),year);

        else if (days>244 && days <=274)
        printf("%d  SEPTEMBER  %d ", (days-244),year);

        else if (days>274 && days <=305)
        printf("%d  OCTOBER  %d ", (days-274),year);

        else if (days>305 && days <=335)
        printf("%d  NOVEMBER  %d ", (days-305),year);

        else if (days>335 && days <=366)
        printf("%d  DECEMBER  %d ", (days-335),year);
        
        else
        {
        printf("%d IS A LEAP YEAR",year);
        printf("\n NO. OF DAYS CANNOT BE LESS THAN ZERO AND GREATER THAN 366");
        }

    }

    //NOT A LEAP YEAR
    else
    {
        if(days>0 && days<=31)
        printf("%d  JANUARY  %d ", days,year);

        else if (days>31 && days <=59)
        printf("%d  FEBRUARY  %d ", (days-31),year);

        else if (days>59 && days <=90)
        printf("%d  MARCH  %d ", (days-59),year);

        else if (days>90 && days <=120)
        printf("%d  APRIL  %d ", (days-90),year);

        else if (days>120 && days <=151)
        printf("%d  MAY  %d ", (days-120),year);

        else if (days>151 && days <=181)
        printf("%d  JUNE  %d ", (days-151),year);

        else if (days>181 && days <=212)
        printf("%d  JULY  %d ", (days-181),year);

        else if (days>212 && days <=243)
        printf("%d  AUGUST  %d ", (days-212),year);

        else if (days>243 && days <=273)
        printf("%d  SEPTEMBER  %d ", (days-243),year);

        else if (days>273 && days <=304)
        printf("%d  OCTOBER  %d ", (days-273),year);

        else if (days>304 && days <=334)
        printf("%d  NOVEMBER  %d ", (days-304),year);

        else if (days>334 && days <=365)
        printf("%d  DECEMBER  %d ", (days-334),year);

        else
        {
            printf("%d IS NOT A LEAP YEAR",year);
            printf(" \n NO. OF DAYS CANNOT BE LESS THAN ZERO AND GREATER THAN 365");
        }
           
    }
        
     return 0;   
    
}