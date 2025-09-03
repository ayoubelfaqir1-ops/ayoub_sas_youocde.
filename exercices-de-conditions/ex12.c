#include <stdio.h>
#include <math.h>

int main() {
    int heur,min,sec,heur2,min2,sec2;
    
    printf("entrez la premier instant au format (HH:MM:SS): ");
    scanf("%d:%d:%d",&heur,&min,&sec);
    printf("entrez la deuxieme instant au format (HH:MM:SS): ");
    scanf("%d:%d:%d",&heur2,&min2,&sec2);
   
    if (heur>heur2){
        printf("Le second precede le premier.\n");
    }else if (heur==heur2&&min>min2){
        printf("Le second precede le premier.\n");    
     
    }else if(heur==heur2 && min==min2&& sec>sec2){
      printf("Le second precede le premier.\n");
    
    }else if (heur==heur2&&min==min2&&sec==sec2) {
        printf("Les deux sont identiques");

    } else {
        printf("Le premier instant precede le second");
    }
    
    
    
    
    
    
  return 0; 
    
}