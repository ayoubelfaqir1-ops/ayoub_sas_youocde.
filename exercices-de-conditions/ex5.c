#include <stdio.h>
#include <math.h>

int main() {
    float anne,mois,jours,heures,min,sec;

    printf("entrez votre anne:");
    scanf("%f", &anne);
    mois=(anne*365)/30;
    jours=mois*30;
    heures=jours*24;
    min=heures*60;
    sec=min*60;
    printf ("en mois:%.2f\n",mois);
    printf ("en jours:%.2f\n",jours);
    printf ("en heures:%.2f\n",heures);
    printf ("en minutes:%.2f\n",min);
    printf ("en secondes:%.2f\n",sec);
    
  return 0; 
    
}
