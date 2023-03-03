#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int reverse = 0;
    while (n > 0){
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;     // seedha jodenge to add ho jyega
        n = n / 10;
    }
    printf("%d", reverse);

    return 0;
}