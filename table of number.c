#include<stdio.h>
int main()
{
    int num,counter;
    printf("enter a number:");
    scanf("%d",&num);
    printf("multiplication table of %d:\n",num);
    for(counter=1;counter<=10;counter++)
    {
        printf("%d*%d=%d\n",num,counter);
    }
}
