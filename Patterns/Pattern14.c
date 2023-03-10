#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int row = 1;

    while (row <= n){
        char ch = 'A' + row - 1;
        int col = 1;
        while (col <= row){
            printf("%c ", ch);
            ch = ch + 1;
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
    return 0;
}