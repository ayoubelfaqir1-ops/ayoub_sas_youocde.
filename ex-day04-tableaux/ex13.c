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
    
     printf("les nombres impairs sont:");
    for (int i = 0; i < n; i++)
    {

     if (num[i]%2!=0)
     {
        printf("%d ",num[i]);
     }
     
    }
    
   
   
    return 0;
}