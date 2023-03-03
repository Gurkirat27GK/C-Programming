#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Printing count from 1 to n:\n");

    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    
    return 0; 
}