#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int row = 1;

    while (row <= n){
        
        // Print space
        int space = n - row;
        while (space){
            printf(" ");
            space = space - 1;
        }

        // Print 1st triangle
        int col = 1;
        while (col <= row){
            printf("%d", col);
            col = col + 1;
        }

        // Print 2nd triangle
        col = row - 1;
        while (col >= 1){
            printf("%d", col);
            col = col - 1;
        }
        printf("\n");
        row = row + 1;
    }
    return 0;
}

/*
   1
  121
 12321
1234321
*/