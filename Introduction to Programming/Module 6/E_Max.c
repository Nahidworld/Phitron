#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int max = INT_MIN;
    int num = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        if(num>max){
            max = num;
        }
    }
    printf("%d",max);
    return 0; 
}