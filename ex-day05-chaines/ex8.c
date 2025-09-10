
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char caractere[50];
    
    printf("entrez votre phrase majiscule: ");
    fgets(caractere,sizeof(caractere),stdin);
    for (int i = 0; i < strlen(caractere)-1; i++)
    {
        caractere[i]=tolower(caractere[i]);
        
        
    }
    
    printf("la phrase est: %s",caractere);
  
   
    return 0;

}