#include <stdio.h>
#include <math.h>

int main() {
    char caractere;
    
    printf("entrez le lettre:");
    scanf("%c",&caractere);
   
    if (caractere >= 'A' && caractere <= 'Z' ) {
        printf("le caractere est une lettre majiscule.\n");
    }else if (caractere >= 'a' && caractere <= 'z' ) {
        printf("le caractere est une lettre miniscule.\n");
    }else {
      
        printf("le caractere n'est pas une lettre.\n");
    }
    
    
  return 0; 
    
}