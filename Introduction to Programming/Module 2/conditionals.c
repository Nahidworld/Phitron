#include<stdio.h>
int main(){
    int tk ;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("Eating Burger!");
    }else if(tk >= 50){
        printf("Eating Fuska!");
    }
    else{
        printf("Not Eating Burger!");
    }
}