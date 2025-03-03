#include <stdio.h>
#include <stdlib.h>


int main(){
    int num1,num2,swap;

    for(int x =1  ; x <=2 ; x++){
        printf("Pleas Enter number %d:\n", x);
        switch(x){
        case 1:scanf("%d" , &num1);break;
        case 2:scanf("%d" , &num2);break;
        default:printf("other !!!!");
        }
    }
    swap = num1;
    num1 = num2;
    num2 = swap;


    printf("-----------------------------\n\n");
    printf("Number one is : %d\n" , num1 );
    printf("Number two is : %d\n" , num2 );
    return 0;
}
