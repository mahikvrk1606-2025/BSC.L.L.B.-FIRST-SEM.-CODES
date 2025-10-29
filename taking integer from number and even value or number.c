#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are:\n", n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            {
            printf("%d\n", i);
            }
    }
}
