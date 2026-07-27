#include<stdio.h>
#include<limits.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int min_position =1;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            min_position = i + 1;
        }
    }
    printf("%d %d",min,min_position);
    
    return 0; 
}