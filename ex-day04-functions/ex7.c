#include<stdio.h>
#include<string.h>

void inverse(char chaine[]){
    int debut=0;
    int fin=strlen(chaine)-1;
    while(debut<fin){
        char c=chaine[fin];
        chaine[fin]=chaine[debut];
        chaine[debut]=c;
        debut++;
        fin--;
        }
    

    }
    

int main(){
    
    char chaine[100]={"abcd"};
    
     
        printf("avant inversion :%s\n",chaine);


        inverse(chaine); 
        printf("apres inversion :%s\n",chaine);


   
    return 0;

}