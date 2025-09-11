#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    if(x>0)
    {
        printf("number is positive");
    }
    else if(x<0)
    {
        printf("number is negative");
    }
    else if(x==0)
    {
        printf("number is zero");
    }
}
