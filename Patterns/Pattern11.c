#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 1;
    char count = 'A';     // for alphabet counting

    while (i <= n){
        int j = 1;
        while (j <= n){
            printf("%c ", count);
            count = count + 1;
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}