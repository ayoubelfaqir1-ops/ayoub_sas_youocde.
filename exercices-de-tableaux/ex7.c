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
    
    int a,b;
    
    
    do
    {
      b=0;
      for (int i = 0; i < n-1; i++)
        {
      if (num[i]>num[i+1])
       {
        a=num[i];
        num[i]=num[i+1];
        num[i+1]=a;
        b=1;
       }  
        
       }
     } while (b==1);
    
    for (int i = 0; i < n; i++)
    {
      printf("%d",num[i]);
      
    }
   
    return 0;
}