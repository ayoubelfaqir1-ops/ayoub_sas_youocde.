#include<stdio.h>

int main(){
    int nombre[10]={0,1,2,3,4,5,6,7,8,9};
    int num,debut=0,fin=9,a=0,milieu;

    printf("Entrez le nombre : ");
    scanf("%d",&num);
    
    while (debut<=fin)
    {
        milieu=(debut+fin)/2;
    if (nombre[milieu]==num)
   {
    printf("le nombre est trouvee a l'index %d.",milieu);
    a=1;
    break;
   }else if(nombre[milieu]<num){
    debut=milieu+1;
   } else 
   {
   fin=milieu-1;
   }
   }
   
   if (!a)
   {
     printf("le nombre n'est pas trouvee ");
   }
   
   
    
    
    
    return 0;
 }
