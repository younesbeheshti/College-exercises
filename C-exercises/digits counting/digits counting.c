#include <stdio.h>
#include <conio.h>

int main()
{
    int count;
    int n;
    printf("Please enter a number:\n");
    scanf("%d", &n);
    while (n>0)
    {
        n = n/10;
        count +=1;
    }
    if (count > 1)
    {
        printf("%d digits", count);
    }else
    {
        printf("%d digit", count);
    }
    printf("\nPress any key to continue.");
    getch();
    return 0;
}
