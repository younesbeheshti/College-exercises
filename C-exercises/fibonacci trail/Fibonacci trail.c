#include <stdio.h>
#include <conio.h>

int main()
{
    int f1 = 0;
    int f2 = 1;
    int f3 = f1 + f2;
    int i = 4;
    int n;
    printf("Fibonacci Trail \nHow many sentences do you want this sequence?\n");
    scanf("%d", &n);
    if (n>0){
        printf("there you are:\n");
        printf("%d\t%d\t%d", f1 , f2 , f3);
    do {
        f1=f2;
        f2=f3;
        f3=f1+f2;
        i++;
        printf("\t%d", f3);
    }while (i<=n);
    }else {
        printf("\a\aPlease enter a positive value\a\a");
    }
    printf("\n\nPress any key to exit.");
    getch();
    return 0;
}
