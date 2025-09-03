#include <stdio.h>
#include <math.h>

int main() {
    float num;
    
    printf("entrez le nombre :");
    scanf("%f",&num);
   
    if (num<0){
        printf("le nombre est negatif.\n");
    }else if (num==0){
     
        printf("le nombre est null.\n");
    }else {
      
        printf("le nombre est positif\n");
    }
    
    
    
    
    
  return 0; 
    
}
