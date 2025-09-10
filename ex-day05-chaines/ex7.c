
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char caractere[50];
    
    printf("entrez votre phrase minuscile: ");
    fgets(caractere,sizeof(caractere),stdin);
    size_t size=strlen(caractere)-1;
    for (int i = 0; i < size; i++)
    {
        int min=caractere[i]-'a'+'A';
        caractere[i]=min;
        
    }
    
    printf("la phrase est: %s",caractere);
  
   
    return 0;

}