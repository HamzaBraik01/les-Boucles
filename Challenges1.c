#include <stdio.h>

int main() {
    int num;
    printf("donnez moi un nombre : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d ",num,i,num*i);
    }

    return 0;
}