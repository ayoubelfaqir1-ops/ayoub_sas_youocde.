#include <stdio.h>
int main() {
    float n1,n2,res;
    


    printf("entrez le premier nombre:");
    scanf("%f",&n1);
    printf("entrez le deuxie nombre:");
    scanf("%f",&n2);

        res=n1+n2;
        printf("l'Addition est:%.2f\n",res);
    
         res=n1-n2;
        printf("la soustraction est:%.2f\n",res);
    
         res=n1*n2;
        printf("la multipliction est:%.2f\n",res);
    
        res=n1/n2;
        printf("la division est:%.2f\n",res);
   
        
    

    return 0;
}

