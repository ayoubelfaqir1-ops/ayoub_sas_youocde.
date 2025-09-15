#include<stdio.h>
#include<string.h>

int main(){
char phrase[100];
printf("entrez la phrase : ");
fgets(phrase,100,stdin);


for (int i = 0; i < strlen(phrase); i++)
{
   if (phrase[i]>='A'&& phrase[i]<='Z')
   {
    phrase[i]=phrase[i]+32;
   }
   
}
printf("%s",phrase);
return 0;
}