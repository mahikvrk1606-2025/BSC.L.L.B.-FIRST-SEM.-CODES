#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factors are:");
    for (i=1;i<=num;i++)
    {
        if(num%i==0)
    {
        printf("%d",i);
        count++;
    }
    }
    printf("\ntotal factors:%d",count);
}
