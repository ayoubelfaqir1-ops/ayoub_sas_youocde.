#include <stdio.h>
#include <math.h>
int main() {
    float n1,n2,n3,moyen;
    


    printf("entrez le premier nombre:");
    scanf("%f",&n1);
    printf("entrez le deuxie nombre:");
    scanf("%f",&n2);
    printf("entrez le troisieme nombre:");
    scanf("%f",&n3);

    moyen=pow((n1*n2*n3),1.00/3);

    printf("le moyene geometrique est:%f",moyen);

    
    
    
    

    return 0;
}