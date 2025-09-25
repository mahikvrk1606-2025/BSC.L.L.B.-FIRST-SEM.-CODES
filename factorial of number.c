#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",n);
    for(i=n-1;i>n;i--)
    {
        n=n*i;
    }
    printf("factorial=%d,n");
}
