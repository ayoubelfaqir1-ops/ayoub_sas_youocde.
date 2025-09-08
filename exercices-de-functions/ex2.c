#include<stdio.h>

int produit(int a, int b){
    return a*b;
}
int main(){
    int a,b;
    printf("entrez le premier nombre:");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre:");
    scanf("%d",&b);
    printf("la multiplication de deux nombres est:%d",produit( a, b));
    return 0;

}