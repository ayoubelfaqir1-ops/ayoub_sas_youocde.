#include <stdio.h>
#include <math.h>

int main() {
    int num,i=0;
    
    printf("entrez le nombre :");
    scanf("%d",&num);
    if (num==0){
        printf("le nombre contient 1 chiffres.");
        return 0;
    }
    while(num>0){
        num/=10;
        i++;

    }
    
    printf("le nombre contient %d chiffres.",i);
    
    
  return 0; 
    
}