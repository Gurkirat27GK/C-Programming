#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0, ans = 0;

    while (n > 0){
        int digit = n % 10;

        if (digit == 1){
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    printf("%d", ans);
    
    return 0;
}