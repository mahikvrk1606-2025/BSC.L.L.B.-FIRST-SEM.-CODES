#include <stdio.h>
int main ()
{
    int array[10],i;
    for (i=0;i<10;i++)
    {
        printf("Enter element %d : ",i + 1);
        scanf("%d",^&array[i]);
    }
    printf(""positions of even elements are: ");
    for(i=0;i<10;i++)
    {
        if(array[1]%2==0)
            printf("%d",i+1);
    }
}
