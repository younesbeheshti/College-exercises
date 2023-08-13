#include <stdio.h>


int pow(double n)      //function for calculating the power
{
    double f = 1;
    for(int i = 1; i <=n;i++)
    {
        f *= n;
    }
    return f;
}
int main()
{
    double x;
    double sum = 0;
    printf("Enter a number to calculat the power: ");
    scanf("%lf", &x);
    for (int j = 1; j <=x;j++)
    {
        sum += pow(j);
    }
    printf("%lf",sum);
    return 0;
}
