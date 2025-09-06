#include<stdio.h>
#include<math.h>
int main(){
    int num,inverse;
    

    printf("entrez le nombre:");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
    
    inverse=num%10;
    num/=10;
    }
    


    

return 0;
}