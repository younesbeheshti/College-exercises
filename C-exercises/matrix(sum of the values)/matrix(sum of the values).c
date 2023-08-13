#include <stdio.h>


int main()
{
    int n,m;
    int i,j;
    printf("Enter the Row and Column :");
    scanf("%d%d", &n, &m);
    int arr1[n][m];
    int arr2[n][m];
    int arr3[n][m];
    printf("Enter the value for the matrix one: ");
    for (i = 0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the value for the matrix two: ");
    for (i = 0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Result: \n");
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<m;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
    }
    return 0;
}
