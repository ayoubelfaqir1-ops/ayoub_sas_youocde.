#include<stdio.h>

int parite(int n){
    if(n%2==0){
        return 1;
    }else {
        return 0;
    }
    }
    

int main(){
    int n;
    printf("entrez le nombre positif:");
    scanf("%d",&n);
    parite( n);
    if( parite( n)){
        printf("le nombre est pair");
    }else {
        printf("le nombre est impair");
    }
    
    return 0;

}
