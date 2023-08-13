#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(char names[][50], int length);
int main()
{
    printf("Enter \"10 name\" to sort in alphabet: ");
    char names[10][50];
    for(int i=0;i<10;i++){
        gets(names[i]);
    }
    insertionSort(names,0);
    return 0;
}
void insertionSort(char names[][50], int length){
    char temp[50];
    for(int i=0;i<10;i++){
        for (int j=0; j<9; j++) {
          if (strcmp(names[j], names[j+1]) > 0) {
            strcpy(temp, names[j]);
            strcpy(names[j], names[j+1]);
            strcpy(names[j+1], temp);
         }
      }
    }
    for(int i=0;i<10;i++){
        printf("%s\n",names[i]);
    }
}
