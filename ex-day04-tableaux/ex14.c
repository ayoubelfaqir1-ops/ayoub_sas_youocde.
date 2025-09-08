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
    float S=0;
    for (int i = 0; i < n; i++)
    {
      S=S+num[i];
      
    }
    float moyen=S/n;
    printf("le moyen est:%.2f\n",moyen);
   
  
   
   
   
    return 0;
}