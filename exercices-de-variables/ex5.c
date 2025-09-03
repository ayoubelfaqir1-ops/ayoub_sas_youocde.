#include <stdio.h>

int main() {
    float temp;


    printf("entrez la temperature de l'eau:");
    scanf("%f",&temp);

    
    if (temp < 0){
        printf("etat solide(glace).");
    }else if (temp >= 0 && temp < 100) {
        printf ("etat liquide(eau).");
    }else {
        printf("etat gaz(vapeur).");
    }

    return 0;
}


