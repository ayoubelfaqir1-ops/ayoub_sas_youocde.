#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct 
{
    char nom[50];
    int count;
    int position[10];
    int p;
}mots;


int main(){
    char phrase[] ="Le chat noir dort Le chien joue";
    mots word[25];
    char *mot;
    
   
    
    
    mot=strtok(phrase," ");
    int s=0;
    while (mot!=NULL)
    {
    int trouve=0;
    for (int i =0 ; i < s; i++)
    {
        if (strcmp(word[i].nom,mot)==0)
        { 

           
           word[i].count++;
           word[i].position[word[i].p]= mot - phrase;
           word[i].p++;
           trouve=1;
           
           break;
        }
        
    }
    if (!trouve)
    {
        word[s].count = 1;
        word[s].p=0;
        strcpy(word[s].nom,mot);
        word[s].position[word[s].p]= mot - phrase;
        word[s].p++;
        s++;

    }
    mot=strtok(NULL," ");
    
    }
    for (int i = 0; i < s; i++)
    {
        printf("le mot -%s- repete -%d- fois lenght -%d- postion:[ ",word[i].nom,word[i].count,strlen(word[i].nom));
        for (int j = 0; j < word[i].p; j++)
        {
            printf("%d ",word[i].position[j]);
        }
        printf("]\n");
    }
    return 0;

}