#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("please enter a number:\n");
    scanf("%d", &n);
    while (n!=0){
        printf("%d",n%10);
        n/=10;
    }
    printf("\n\nPress any key to exit.");
    getch();
    return 0;
}
