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
    int max=num[0];
    for (int i = 1; i < n; i++)
    {
        if (max<num[i])
        {
          max=num[i];
        }
        
     
      
    }
    printf("le nombre plus grand est %d\n",max);
   
  
   
   
   
    return 0;
}