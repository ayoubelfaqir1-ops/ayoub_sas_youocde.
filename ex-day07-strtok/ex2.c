#include<stdio.h>
#include<string.h>

int main(){
char phrase[100];
char car[10]={',','?','!','.',';','\0'};
printf("entrez la phrase : ");
fgets(phrase,100,stdin);
phrase[strcspn(phrase,"\n")]=0;


for (int i = 0; i < strlen(phrase); i++)
{
    for (int j = 0; j < strlen(car); j++)
    {
         if (phrase[i]==car[j])
   {
        for (int d=i; d < strlen(phrase); d++)
        {
            phrase[d]=phrase[d+1];
        }
        i--;
   }
    }
   
}
printf("%s",phrase);
return 0;
}