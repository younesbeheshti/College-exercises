#include <stdio.h>

int main()
{
    int n;
    int i,j,k;
    printf("Enter number for Rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        //print the spaces from the corner
        for(j=n;j>i;j--){
            printf(" ");
        }
        //print the stars
        for(k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    //print the Diameter
    for(i=0;i<2*n+1;i++)
        printf("*");
    printf("\n");
    for(i=0;i<=n;i++){
        //print the spaces from the corner
         for(j=0;j<=i;j++){
            printf(" ");
        }
        //print the stars
        for(k=2*n-1;k>2*i;k--){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
