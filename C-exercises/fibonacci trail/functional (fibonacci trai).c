#include <stdio.h>
#include <conio.h>


int fibonacci(int);

int main()
{
    int f1 = 0;
    int f2 = 1;
    int n;
    printf("Fibonacci Trail \nHow many sentences do you want this sequence?\n");
    n = scan();
    if (n>0)
    {
        printf("Here you are:\n%d\t%d", f1, f2);
        for (int j = 1; j <= (n-2); j++)
        {
            printf("\t%d", fibonacci(j));
        }
    }
    printf("\nPress any key to continue.");
    getch();
    return 0;
}


int scan()
{
    int x;
    scanf("%d", &x);
    if (x<=0)
        {
            printf("\a\aPlease enter a positive value:\a\a\n");
            x=scan();
        }
    return x;
}


int fibonacci(int x)
{
    int f1 = 0;
    int f2 = 1;
    int f3 = f2 + f1;
    for (int i=1; i<=x; i++)
    {
        f1 = f2;
        f2 = f3;
        f3 = f2 + f1;
    }
    return f3;
}
