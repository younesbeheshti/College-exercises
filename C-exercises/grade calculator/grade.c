#include <stdio.h>
#include <conio.h>


void function();
void scan();
double grade;


int main()
{
    printf("Enter a grade as a floating point number:\n");
    //grade = scan();
    //scanf("lf", &grade)/
   // grade = scan();
    function();
    printf("\nPress any key to continue.");
    getch();
    return 0;
}

void scan()
{
//    double grade;
    scanf("%lf", &grade);
    if (grade < 0 || grade > 20)
        {
            printf("\a\aPlease enter a value between this two number(0 < grade < 20):\a\a\n");
            scan();
        }
//    return grade;
}


void function()
{
//    double grade;
    scan();
    char q_grade;
    if (grade < 12)
        q_grade = 'F';
    else if (grade < 14)
        q_grade = 'E';
    else if (grade < 16)
        q_grade = 'D';
    else if (grade < 18)
        q_grade = 'C';
    else if (grade < 19)
        q_grade = 'B';
    else
        q_grade = 'A';
    printf("the grade is: %c", q_grade);
    //return q_grade;
}
