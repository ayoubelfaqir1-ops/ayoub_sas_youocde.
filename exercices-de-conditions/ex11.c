#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int jours;

    srand(time(NULL));
    jours = rand() % 7 ;
     printf("le jour est "); 
   
    switch (jours) {
        case 0:printf("lundi");
         break;
        case 1:printf("mardi");
         break;
        case 2:printf("mercdredi");
        break;
        case 3:printf ("jeudi");
        break;
        case 4:printf("vendredi");
        break;
        case 5:printf("samedi");
        break;
        case 6:printf("dimanche");
        break;
        
    }
    
    
    
    return 0; 
}
