#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("enter an integer: \n");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d is even.", num);
    }else {
        printf("%d is odd.", num);
    }
    printf("\n\nPress any key to exit.");
    getch();
    return 0;
}
