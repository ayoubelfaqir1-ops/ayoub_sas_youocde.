#include <stdio.h>

int main() {
    
    int n,n2;
   
   
    printf("entrez la taille de premier tableau:");
    scanf("%d",&n);
    
    int num[n];
    
    for (int i = 0; i < n; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num[i]);
    }
    
    printf("entrez la taille de deuxieme tableau:");
    scanf("%d",&n2);
    
    int num2[n];
    
    for (int i = 0; i < n2; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num2[i]);
    }
    
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",num[i]);
     }
      for (int i = 0; i < n2; i++)
    {
        printf("%d ",num2[i]);
     }
     
    
    
   
   
    return 0;
}