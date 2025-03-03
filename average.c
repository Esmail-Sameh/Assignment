#include <stdio.h>
#include <stdlib.h>

///////********* Calc the average*********////////
int main(){
    int num1,num2,num3;
    for(int x =1  ; x <=3 ; x++){
        printf("Pleas Enter number %d:\n", x);
        switch(x){
        case 1:scanf("%d" , &num1);break;
        case 2:scanf("%d" , &num2);break;
        case 3:scanf("%d" , &num3);break;
        default:printf("other !!!!");
        }
    }
    int result = (num1+num2+num3) / 3;
    printf("-----------------------------\n\n");
    printf("your avarage is : %d\n" , result);
    return 0;
}


