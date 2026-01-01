#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    // take array input
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int idx;
    scanf("%d",&idx);

    // shift the numbers to the left
    for(int i=idx; i<n; i++){
        a[i] = a[i+1];
    }

    // array output
    for(int i=0; i<n-1; i++){
        printf("%d ",a[i]);
    }

    return 0; 
}