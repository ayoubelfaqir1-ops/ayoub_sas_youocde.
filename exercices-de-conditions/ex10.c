#include <stdio.h>
#include <string.h>

int main() {
    int annee, mois, jours; 
    char month[25]; 
    
    printf("entrez la date en format JJ/MM/AAAA: ");
    scanf("%d/%d/%d", &jours, &mois, &annee);
   
    switch (mois) {
        case 1: strcpy(month, "janvier"); break;
        case 2: strcpy(month, "fevrier"); break;
        case 3: strcpy(month, "mars"); break;
        case 4: strcpy(month, "avril"); break;
        case 5: strcpy(month, "mai"); break;
        case 6: strcpy(month, "juin"); break;
        case 7: strcpy(month, "juillet"); break;
        case 8: strcpy(month, "aout"); break;
        case 9: strcpy(month, "septembre"); break;
        case 10: strcpy(month, "octobre"); break;
        case 11: strcpy(month, "novembre"); break;
        case 12: strcpy(month, "decembre"); break;
        default: 
            printf("mois invalide\n");
            return 1;
    }
    
    printf("la date est : %d-%s-%d\n", jours, month, annee); 
    
    return 0; 
}
