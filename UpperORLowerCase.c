#include <stdio.h>

int main(){
    char ch;
    printf("enter the value of ch ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("This is lower case");
    }
    else if (ch >= 'A' && ch <= 'Z'){
        printf("This is upper case");
    }
    else{
        printf("This is numeric");
    }
    
    return 0;
}