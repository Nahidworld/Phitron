#include<stdio.h>
int main(){
    int temp;
    int a=10; 
    int b=20;
    printf("Before swap : a= %d b= %d\n",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("After swap : a= %d b= %d",a,b);
    return 0; 
}