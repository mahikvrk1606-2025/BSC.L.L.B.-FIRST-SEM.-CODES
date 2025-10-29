#include <stdio.h>

int main()
{
    int arr[10];
    int i, key, found = 0;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number to search: ");
    scanf("%d", &key);
    for(i = 0; i < 10; i++)
    {
        if(arr[i] == key)
        {
            printf("\nKey found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("\nKey not found in the array.\n");
    }
}
