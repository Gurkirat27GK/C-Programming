#include <stdio.h>

int main(){
    int n;
    int i = 1;
    scanf("%d", &n);

    while (i <= n){
        printf("%d ", i);
        i = i + 1;
    }

    return 0;
}