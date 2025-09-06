#include<stdio.h>


int main (){
    int n,somme=0;
    
    while (n!=0)
    {
    printf("entrez le nombre a ajouter:");
    scanf("%d",&n);
    somme=somme+n;
    }
    printf("la somme est:%d",somme);
    return 0;
}