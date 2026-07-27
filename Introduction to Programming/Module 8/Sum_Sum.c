#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int pos=0, neg=0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            neg = neg+arr[i];
        }
        else{
            pos = pos + arr[i];
        }
    }
    printf("%d %d",pos, neg);

    return 0;
}