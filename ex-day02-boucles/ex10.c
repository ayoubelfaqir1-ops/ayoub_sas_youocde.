#include <stdio.h>
#include <math.h>

int main() {
    int num,res,somme=0,i=1; 
    
    printf("entrez le nombre :");
    scanf("%d",&num);
    for(int i= 1;i<num;i++){
        
        res=somme+i;
        
        printf("%d + %d = %d \n",somme,i,res);
        
        somme=res;

        



  } 
  
  printf("la somme des nombres");
    
    
  return 0; 
    
}