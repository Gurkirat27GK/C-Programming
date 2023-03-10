#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int row = 1;

    while (row <= n){

        // space print krlo
        int space = row - 1;
        while (space){
            printf(" ");
            space = space - 1;
        }

        // star print krlo
        int col = 1;
        while (col <= n - row + 1){
            printf("*");
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
    return 0;
}

/*
*****
 ****
  ***
   **
    *
*/