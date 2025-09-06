#include<stdio.h>
int main(){
    int base,exposant,resultat,a;

    printf("entrez la base:");
    scanf("%d",&base);
    printf("entrez l'exposant:");
    scanf("%d",&exposant);
    if (exposant==0)
    {
        printf("le resultat est 1");
        return 0;
    }else if (base==0)
    {
      printf("le resultat est 0");  
    }else if(exposant==1){
        printf("le resultat est %d",base);
        return 0;
    }
    a=base;
    for (int i=2;i<=exposant;i++) {
        
        resultat=a*base;
        a=resultat;

   
        
    }
    printf("le resultat est :%d ",resultat);

return 0;
}