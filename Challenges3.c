#include <stdio.h>

int main() {
    int num;
    int som=0;
    printf("donnez un nombre : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        som+=i;
        printf(" %d ",i);
        if(i!=num){
            printf("+");
        }
    }
    printf(" = %d",som);


    return 0;
}