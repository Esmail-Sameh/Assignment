#include <stdio.h>
#include <stdlib.h>
/*
void main()
{
    char yesOrNo;
    do
    {
        double num1, num2,result;
        char ope;
        printf("Enter number one:\n ");
        scanf("%d", &num1);
        printf("Enter the operation (+ , - , x , /):\n ");
        scanf("%s", &ope);
        printf("Enter number two:\n ");
        scanf("%d", &num2);

        switch(ope)
        {
        case '+':result = num1 + num2;break;
        case '-':result = num1 - num2;break;
        case 'x':result = num1 * num2;break;
        case '/':if(num1 == 0){num1 = 1;}result = num1 / num2;break;
        }
        printf("-------------------------\n");
        printf("your result is: %d\n", result);
        printf("-------------------------\n\n\n");
        printf("If you want to do another operation, click (y or n)? ");
        scanf("%s" , &yesOrNo);
    }while(yesOrNo == 'y');



}
*/


int main()
{
    int n = 4;
    int k = 2;
    printf ("%d\n", ++n );
    printf ("%d\n", n );
    printf ("%d\n", n++ );
    printf ("%d\n", n);
    printf ("%d\n", -n) ;
    printf ("%d\n", n) ;
    printf ("%d\n", --n );
    printf ("%d\n", n );
    printf ("%d\n", n-- );
    printf ("%d\n", n );
    printf ("%d\n", n+k );
    printf ("%d %d \n", n, k );
}

