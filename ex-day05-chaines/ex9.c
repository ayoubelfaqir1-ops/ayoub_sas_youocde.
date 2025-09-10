
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char caractere[50];
    char second[50];
    int j=0;
    printf("entrez votre phrase minuscile: ");
    fgets(caractere,sizeof(caractere),stdin);
    int d=(int)strlen(caractere)-1;
    for (int i = 0; i < d; i++)
    {
        if (caractere[i]!=' ')
        {
            second[j]=caractere[i];
            j++;

        }
        
    }
    second[j]='\0';
    
    printf("la phrase est: %s",second);
  
   
    return 0;

}