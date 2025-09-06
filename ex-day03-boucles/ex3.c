#include<stdio.h>
#include<math.h>
int main(){
    int num,i;
    int premier = 1;

    printf("entrez le nombre:");
    scanf("%d",&num);
    for (i = 2; i <= num; i++) {
    int premier = 1;
    for (int j = 2; j <= sqrt(i); j++) {
        if (i % j == 0) {
            premier = 0;
            break;
        }
    }
    if (premier) {
        printf("%d ", i);
    }
}


    

return 0;
}