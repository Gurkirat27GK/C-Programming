#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int ans = 0;
    
    while (n > 0){
        int bit = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    printf("%d", ans);
    return 0;
}