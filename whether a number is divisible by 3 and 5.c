#include<stdio.h>
int main()
{
    int x;
    printf("enter a value of x:");
    scanf("%d",&x);
    if(x%3==0)
    {
        if(x%5==0)
        {
            printf("okay");
        }
    }
        else
        {
            printf("not okay");
        }
}
