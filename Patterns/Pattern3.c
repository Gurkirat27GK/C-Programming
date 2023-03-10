#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 1;
    int count = 1;     // for counting

    while (i <= n){
        int j = 1;
        while (j <= n){
            printf("%d ", count);
            count = count + 1;
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}