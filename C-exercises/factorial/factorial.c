#include <stdio.h>
#include <conio.h>


int main()
{
    int n;
    int fact = 1;
    printf("enter a Number:");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Enter a number greater than 0 :");
        scanf("%d", &n);
    }
    printf("This the factorial of %d : ", n);
    if (n == 0 || n == 1)
    {
        printf("%d", fact);
    }
    else
    {
        for (int i = 1;i <= n;i++)
        {
            fact *= i;
        }
        printf("%d", fact);
    }
    return 0;
}
