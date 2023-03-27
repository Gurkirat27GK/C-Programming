#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int row = 1;

    while (row <= n){
        int col = 1;
        char start = 'A' + n - row;
        while (col <= row){
            printf("%c ", start);
            start = start + 1;
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
    return 0;
}

/*
D
CD
BCD
ABCD
*/