#include<stdio.h>
int main()
{
    int day;
    printf("enter a number(1-7):");
    scanf("%d",&day);
    switch(day)
    {
        case1:printf("monday\n");
        break;
        case2:printf("tuesday\n");
        break;
        case3:printf("wednesday\n");
        break;
        case4:printf("thursday\n");
        break;
        case5:printf("friday\n");
        break;
        case6:printf("saturday");
        break;
        case7:printf("sunday");
        break;
        default:printf("invalid input");
    }
}
