#include <stdio.h>

int main(){
    int a;
    printf("enter the value of a ");
    scanf("%d", &a);

    if (a>0){
        printf("A is positive\n");
    }
    else if (a<0){
        printf("A is negative\n");
    }
    else{
        printf("A is 0\n");
    }

    return 0;
}