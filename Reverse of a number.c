#include <stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse of a number is:%d",rev);
}
