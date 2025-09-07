#include <stdio.h>

int main() {
    
    int n;
   
   
    printf("entrez la taille de tableau:");
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num[i]);
    }
    int min=num[0];
    for (int i = 1; i < n; i++)
    {
        if (min>num[i])
        {
          min=num[i];
        }
        
     
      
    }
    printf("le nombre plus petit est %d\n",min);
   
  
   
   
   
    return 0;
}