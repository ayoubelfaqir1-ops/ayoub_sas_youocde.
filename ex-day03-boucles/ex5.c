#include<stdio.h>
int main(){
    int num,somme=0;

    printf("entrez le nombre:");
    scanf("%d",&num);
    for (int i=1;i<=num;i++) {
        somme=somme+i;
        
        
    }
    if ((num*(num+1))/2){

        printf ("%d\n",somme);
    }
    return 0;
}