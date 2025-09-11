#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    printf("maximum=%d\n",max);
}
