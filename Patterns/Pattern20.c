#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int row = 1;

    while (row <= n){

        // Print 1st triangle
        int col = 1;
        while (col <= n - row + 1){
            printf("%d ", col);
            col = col + 1;
        }

        // Print 2nd triangle
        col = 1;
        while (col <= (row - 1)*2){
            printf("* ");
            col = col + 1;
         }

        // Print 3rd triangle
        col = n - row + 1;     // to print counting after 5
        while (col >= 1){
            printf("%d ", col);
            col = col - 1;
        }
        printf("\n");
        row = row + 1;
    }
    return 0;
}

/*
1234554321
1234**4321
123****321
12******21
1********1
*/