#include <stdio.h>

int main() {
    int Number, count;
    printf("Enter number : ");
    scanf("%d", &Number);
    while (Number == 0 || Number == 1 || Number < 0)
    {
        if (Number == 0)
            printf("ZERO is not prime number");
        if (Number == 1)
            printf("ONE is not prime number");
        if (Number < 0)
            printf("your number should be positive");
        printf("\nEnter number greater than 2 : ");
        scanf("%d", &Number);
    }
    for (int i = 2;i <= Number/2;i++)
    {
        if (Number % i == 0)
            count++;
    }
    if (count == 0)
        printf("Number = %d ,is prime number", Number);
    else
        printf("Number = %d ,is not prime number", Number);
    return 0;
}
