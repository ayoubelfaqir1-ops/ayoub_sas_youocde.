#include<stdio.h>
int main(){
    int num;

    printf("entrez le nombre:");
    scanf("%d",&num);
    for (int i=0;i<=num;i++) {
       if (i%2==1)
       {
        printf ("%d\n",i);
       }
       
        
        
    }

return 0;
}