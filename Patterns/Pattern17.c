#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int row = 1;

    while (row <= n){
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