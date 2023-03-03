#include <stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        printf("%d", n);
    }
    else{
        nextTerm = t1 + t2;
    }
  
    for (int i = 3; i <= n; i++){
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("%d", t2);

    return 0;
}