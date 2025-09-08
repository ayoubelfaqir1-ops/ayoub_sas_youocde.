#include<stdio.h>

int somme(int a, int b){
    return a+b;

}
int main(){
    int a,b;
    printf("entrez le premier nombre:");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre:");
    scanf("%d",&b);
    printf("la somme de deux nombres est:%d",somme( a, b));
    return 0;

}