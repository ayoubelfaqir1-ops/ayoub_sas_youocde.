#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct 
{
    char nom[50];
    int count;
}mot;


int main(){
    char phrase[] ="Le chat noir dort Le chien joue";
    mot word[25];
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
           trouve=1;
           break;
        }
        
    }
    if (!trouve)
    {
        word[s].count = 1;
        strcpy(word[s].nom,mot);
        s++;
    }
    mot=strtok(NULL," ");
    
    }
    for (int i = 0; i < s; i++)
    {
        printf("le mot %s repete %d fois.\n",word[i].nom,word[i].count);
    }
    return 0;

}