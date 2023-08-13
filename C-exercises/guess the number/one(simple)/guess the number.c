#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int scan();

int main()
{
    int x,n,y;
    time_t t;
    srand((unsigned) time(&t));
    n = rand() %1001;
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
    x = scan();
    if (x < 0)
        return 0;
    while (n!=x)
    {
        if (x > n)
        {
            printf("too high, Try again.\n");
            x = scan();
        }
        else if (x < n)
        {
            printf("too low, Try again.\n");
            x = scan();
        }
    }
    printf("Excellent! You guessed the number!\n");
    printf("would you like to play again (for yes : 1 and for no : 0)?\n");
    y = scan();
    if (y==1)
        main();
    else if(y==0)
        return 0;
    return 0;
}


int scan()
{
    int x;
    scanf("%d",&x);
    if (x < 0)
    {
        printf("Number should be between 0 and 1000.\nTry again.\n");
        scan();
    }
    return x;
}
