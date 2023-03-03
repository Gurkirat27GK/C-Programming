#include <stdio.h>

int power(int a, int b){
    int ans = 1;

    for (int i = 1; i <= b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int answer = power(a,b);
    printf("Answer is %d\n", answer);

    return 0;
}