#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, k, l;

    int a,b;

    printf("Enter the Y and X dimensions of the array that you wish to be printed.");

    scanf("%d%d", &a, &b);

    int array[a][b];

    printf("Enter the elements of the array starting with the X axis.");

    for(i=0;i<a; i++){

    for(j=0;j<b; j++){
        scanf("%d", &array[i][j]);
        }
    }

    printf("Here's your array display:\n\n");

    for(k=0;k<a; k++){
        for(l=0;l<b;l++){
            printf("%d\t", array[k][l]);
        }
        printf("\n\n");
    }

    return 0;
}
