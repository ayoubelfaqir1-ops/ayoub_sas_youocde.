#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    char phrase[] ="Le chat noir dort Le chien joue";
    char *mot;
    int count=1;
    
    mot=strtok(phrase," ");
    printf("le mot %d:%s\n",count,mot);
    while (mot!=NULL)
    {
    mot=strtok(NULL," ");
    if (mot!=NULL)
    {
    count++;
    printf("le mot %d:%s\n",count,mot);
   
    }
    }
    printf("le nombre des motes est: %d",count);
    return 0;

}