#include <stdio.h>
#include <math.h>

int main() {
    char caractere; 
    
    printf("entrez la lettre:");
    scanf("%c",&caractere);
   
    if (caractere >=65 && caractere <=95){
        printf("la lettre est majuscile.\n");
    }else {
        printf("la lettre n'est pas majuscile.\n");
    }
        
  return 0; 
    
}
