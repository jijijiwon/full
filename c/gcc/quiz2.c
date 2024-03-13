#include <stdio.h>
#include "libcheckeod.h"

void main(){
    int x;
    while(1){
    printf("Input number (0:Exit): ");
    scanf("%d", &x);
    checkeod(x);

    if (x == 0){
        printf("Program Exit~!!\n");
        break;}
}
   }