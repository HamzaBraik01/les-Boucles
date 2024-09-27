#include <stdio.h>

int main() {
    int num;
    int fact=1;
    printf("donnez un nombre : ");
    scanf("%d",&num);
    for(int i=num;i!=0;i--){
        fact*=i;
    }
    printf("%d! = %d",num,fact);

    return 0;
}