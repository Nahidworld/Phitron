#include<stdio.h>
int main(){
    // int a=0, b=0,c=0;
    long long a=0, b=0,c=0, d =0;

    //+-,-+
    // =*,*+,
    // -*,*-

    // scanf("%d %d %d %lld",&a,&b,&c,&d);
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    if(a+b-c==d ||
        a-b+c==d ||
        a+b*c==d ||
        a*b+c==d ||
        a-b*c==d ||
        a*b-c==d ){
            printf("YES");
        }else{
            printf("NO");
        }

    return 0; 
}