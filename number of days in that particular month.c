#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month number (1-12)");
    scanf("%d",&month);
    switch(month)
    {
        case 1://January
        case 3://March
        case 5://May
        case 7://July
        case 8://August
        case 10://October
        case 12://December
        printf("31 days\n");
        break;
        case 4://April
        case 6://June
        case 9://September
        case 11://November
        printf("30 days\n");
        break;
        case 2://Febuary
        printf("28 or 29 days(depends on leap year)\n");
        break;
        default:
            printf("invalid input!");
            break;
    }
}
