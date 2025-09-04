#include<stdio.h>
int main(){
    int num,factorielle=1;

    printf("entrez le nombre:");
    scanf("%d",&num);
    for (int i=1;i<=num;i++) {
        factorielle=factorielle*i;
        
        
    }
printf ("%d\n",factorielle);
return 0;
}