#include <stdio.h>

int main() {

    int A = 0;
    long long  B = 0;
    float C = 0;
    char D;

    scanf("%d",&A);
    scanf("%lld",&B);
    scanf("%f",&C);
    scanf(" %c",&D);

    printf("%d\n",A); 
    printf("%lld\n",B); 
    printf("%.2f\n",C); 
    printf("%c",D); 
    return 0;
}
