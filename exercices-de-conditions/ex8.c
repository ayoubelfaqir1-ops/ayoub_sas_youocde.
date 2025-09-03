#include <stdio.h>
#include <math.h>

int main() {
    float note;
    
    printf("entrez votre note  :");
    scanf("%f",&note);
    
    if (note<10){
        printf("Echec.\n");
    }else if (note >=10 && note <12){
     
        printf("Passable.\n");
    }else if(note >=12 && note <14){
        printf("Assez bien.\n");
    }else if(note>=14 && note<16){
        printf ("Bien.\n");
    }else if(note >=16 && note <=20){
        printf ("Tres bien.\n");
    }else {
        printf("entree invalid.\n");
    }
    
    
    
    
    
  return 0; 
    
}