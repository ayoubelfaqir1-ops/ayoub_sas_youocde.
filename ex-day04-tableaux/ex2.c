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
    
   for (int i = 0; i < n; i++)
   {
    printf("%d\n",num[i]);
   }
  
   
  
   
   
   
    return 0;
}