#include<stdio.h>

int factorielle(int n){
    if(n==0||n==1){
        return 1;
    }else {
        return n*factorielle(n-1);
    }
    }
    

int main(){
    int n;
    printf("entrez le nombre positif:");
    scanf("%d",&n);
   
    printf("le factorielle de %d est:%d",n,factorielle( n));
    return 0;

}