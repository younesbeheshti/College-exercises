#include <stdio.h>

int main()
{
    int arr[10];
    int temp;
    printf("Enter ten number to sort: \n");
    for (int i = 0;i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Printing sorted Elements...\n");
    for (int i = 0;i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
