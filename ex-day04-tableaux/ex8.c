#include <stdio.h>

int main() {
    
    int n;
   
   
    printf("entrez la taille de tableau:");
    scanf("%d",&n);
    
    int num[n];
    int num2[n];
    for (int i = 0; i < n; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num[i]);
    }
    
    
    for (int i = 0; i < n; i++)
    {
        num2[i]=num[i];
        
        printf("%d ",num2[i]);
    }
    
   
   
    return 0;
}