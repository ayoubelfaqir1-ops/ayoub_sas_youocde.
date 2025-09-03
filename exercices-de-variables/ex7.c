#include <stdio.h>
int main() {
    float n1,n2,n3,res;
    int coff=10;


    printf("entrez le premier nombre:");
    scanf("%f",&n1);
    printf("entrez le deuxie nombre:");
    scanf("%f",&n2);
    printf("entrez le troisieme nombre:");
    scanf("%f",&n3);
    
    res = (n1*2 + n2*3 + n3*5) / coff;
    
    printf("la resultat est:%.2f",res);
    

    return 0;
}

