#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        sum = sum + arr[i];
    }
    printf("Sum: %d",sum);
    return 0; 
}