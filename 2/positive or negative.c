#include <stdio.h>
#include <stdlib.h>

void main()
{
    char yesOrNo;
    do
    {
        int number;
        printf("Enter an number: ");
        scanf("%d", &number);
        if (number < 0)
        {
            printf("%d is Negative.\n", number);
        }else if(number == 0){
            printf("%d is not Negative or postive it's zero.\n", number);
        }else
        {
            printf("%d is postive.\n", number);
        }
        printf("If you want to do another operation, click (y or n)? ");
        scanf("%s", &yesOrNo);
    }
    while(yesOrNo == 'y');



}

