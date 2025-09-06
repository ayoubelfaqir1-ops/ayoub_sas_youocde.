#include<stdio.h>
int main(){
    int num,res,somme=0;

    printf("entrez le nombre:");
    scanf("%d",&num);
    for (int i=1;i<=10;i++) {
        res=num*i;
        printf ("%d *  %d =%d\n",num,i,res);
        somme=somme+res;
    }
    
    printf("Somme totale:%d",somme);
    
    return 0;
}