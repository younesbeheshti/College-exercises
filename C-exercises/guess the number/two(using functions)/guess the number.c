#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randomNumber();
void playAgain();
void print();
int scan();


int main()
{
    printf("\t\tI have a number between 1 and 1000.\n\t\tCan you guess my number?\n\t\tPlease type your first guess.\n");
    randomNumber();
    return 0;
}

int scan()
{
    int x;
    scanf("%d",&x);
    if (x < 0 || x > 1000)
    {
        printf("\t\tNumber should be between 0 and 1000.\n\t\t\t\tTry again.\n");
        scan();
    }

    return x;
}

void randomNumber()
{
    int randNum;
    int count;
    int yourGuess = 0;
    time_t t;
    srand((unsigned) time(&t));
    randNum = rand() %1001;
    while(yourGuess == 0){
         yourGuess = scan();
    }
    while (yourGuess != randNum)
    {
        if (yourGuess > randNum)
        {
            printf("\t\t\tToo high,Try again.\n");
            yourGuess = scan();
        }
        else if (yourGuess < randNum)
        {
            printf("\t\t\tToo low, Try again.\n");
            yourGuess = scan();
        }else
        {
            scan();
        }
        count++;
    }
    printf("\t\tExcellent! You guessed the number!\n");
    if (count < 10)
    {
        printf("\n\n\n\t\tEither you know the secret or you are lucky!\n\n\n");
    }else
    {
        printf("\n\n\n\t\t\tYou should be able to do better!\n\n\n");
    }
    printf("\t\tWould you like to play again (y or n)?\n");
    playAgain();
}

void playAgain()
{
    getchar();
    char option;
    scanf("%c", &option);
    if((option == 'Y') || (option == 'y'))
    {
        print();
    }
    else if( (option == 'N') || (option == 'n'))
    {
        return;
    }
    else
    {
        printf("\t\t\tPlease enter either Y or N\n");
        playAgain();
    }
}

void print()
{
    printf("\n\n\n\t\t\t\tWelcome Again\n\n");
    printf("\t\tThe number you should guess is between 0 and 1000\n");
    randomNumber();
}




