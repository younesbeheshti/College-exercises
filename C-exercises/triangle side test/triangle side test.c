#include <stdio.h>
#include <conio.h>

int main()
{
    printf("triangle side test\n");
    int x;
    int y;
    int z;
    printf("Enter x:\n");
    scanf("%d", &x);
    printf("\nEnter y:\n");
    scanf("%d", &y);
    printf("\nEnter z:\n");
    scanf("%d", &z);
    if (x+y>z && x+z>y && y+z>x){
        printf("\nYes\n");
    }else{
        printf("\nNo\n");
    }
    printf("\n\nPress any key to exit.");
    getch();
    return 0;
}
