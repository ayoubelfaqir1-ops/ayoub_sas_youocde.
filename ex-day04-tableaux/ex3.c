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
    int S=0;
    for (int i = 0; i < n; i++)
    {
      S=S+num[i];
      
    }
    printf("%d\n",S);
   
  
   
   
   
    return 0;
}