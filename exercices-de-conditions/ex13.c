#include <stdio.h>
#include <math.h>

int main() {
    float x1,y1,x2,y2,x3,y3;
    float alignes,produit_scalaire,longueur_carre;
    
    printf("entrez les cordonnes du premier point de segment en format(x,y) :");
    scanf("%f,%f",&x1,&y1);
    printf("entrez les cordonnes du deuxieme point de segment en format(x,y) :");
    scanf("%f,%f",&x2,&y2);
     printf("entrez les cordonnes du troisieme point a verifier en format(x,y) :");
    scanf("%f,%f",&x3,&y3);
    alignes = (y3 - y1) * (x2 - x1) - (x3 - x1) * (y2 - y1);
    produit_scalaire = (x3 - x1) * (x2 - x1) + (y3 - y1) * (y2 - y1);
    longueur_carre = pow((x2 - x1),2) + pow((y2 - y1),2);

    if (alignes>= -0.0001&&alignes<= 0.0001&& 0 <= produit_scalaire && produit_scalaire <= longueur_carre) {
    printf("le point est situe sur segment.");
        
    }else {
        
        printf("le point ne situe pas sur segment.");

    }
    
    
    
  return 0; 
    
}