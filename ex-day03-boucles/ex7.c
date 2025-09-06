#include<stdio.h>

int main() {
    int n, i;
    unsigned long long int a = 0, b = 1,somme;

    printf("Entrez le nombre : ");
    scanf("%d",&n);
    printf("Suite de Fibonacci %d :\n", n);


    for (i = 1; i <= n; ++i) {
        printf("%llu ", a);
        somme= a + b;
        a =b;
        b = somme;
    }
   
    
    
    
    return 0;
}
