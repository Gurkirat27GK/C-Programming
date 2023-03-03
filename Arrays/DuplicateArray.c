#include <stdio.h>

int findDuplicate(int arr[], int n){
    int ans = 0;
    
    //XORing all array elements
    for(int i = 0; i < n; i++){
    	ans = ans ^ arr[i];
    }
	
    //XOR (1, n-1)
    for(int i = 1; i < n; i++){
    	ans = ans ^ i;
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,5,3};     // OUTPUT = 3
    int n = sizeof(arr) / sizeof(arr[0]);     // remember

    printf("%d", findDuplicate(arr, n));

    return 0;
}