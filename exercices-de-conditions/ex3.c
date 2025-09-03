#include <stdio.h>

int main() {

    float n1,n2,somme;

    printf("entrez le premier nombre:");
    scanf("%f",&n1);
    printf("entrez le deuxieme nombre:");
    scanf("%f",&n2);
    if (n1==n2){
        somme=(n1+n2)*3;
        printf("la somme est :%.2f",somme);
    }else{
        somme=n1+n2;
        printf("la somme est:%.2f",somme);
    }


    return 0;
} 