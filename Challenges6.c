#include <stdio.h>

int main() {
    int n;
    int i=0;
    int count;
    printf("donnez moi un nombre : ");
    scanf("%d",&n);
    while(count<n){
        i+=2;
        printf(" %d",i);
        count++;
        if(count!=n){
            printf(",");
        }
    }

    return 0;
}