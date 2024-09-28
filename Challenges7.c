#include <stdio.h>

int main() {
    int num;
    int rest;
    printf("Entrez un nombre :  ");
    scanf("%d",&num);
    while(num!=0){
        rest=num%10;
        printf("%d",rest);
        num=num/10;
    }

    return 0;
}