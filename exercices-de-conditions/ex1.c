#include <stdio.h>

int main() {
    int num;

    printf("entrez votre nombre:");
    scanf("%d",&num);
    if (num%2==0){
        printf("le nombre est pair");
    }else if(num%2==1 || num%2==-1){
        printf("le nombre est impair");
    }
