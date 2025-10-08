#include<stdio.h>
int main()
{
    int num,temp,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(num==rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");
}
