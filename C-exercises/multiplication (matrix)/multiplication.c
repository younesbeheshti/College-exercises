#include <stdio.h>

void multiplication();
int main()
{
    multiplication();
    return 0;
}
void multiplication()
{
    int n;
    printf("Enter the \'Row = Column\' of the matrix : ");
    scanf("%d", &n);
    int arr1[n][n];
    int arr2[n][n];
    int result[n][n];

    printf("Enter values ​​for the matrix one: ")
    for (int i = 0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("matrix one[%d][%d]", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter values ​​for the matrix two: ")
    for (int i = 0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("matrix two[%d][%d]", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0;i < n;i++)
    {
        for (int j=0; j < n;j++)
        {
            result[i][j] = 0;
            result[i][j] += arr1[i][j] * arr2[i][j];

        }
    }
    for (int i=0;i<n;i++)
    {
        for (int k=0;k<n;k++)
        {
            printf("%d ",result[i][k]);
        }
        printf("\n");
    }
}
