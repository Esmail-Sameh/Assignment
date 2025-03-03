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

        if (number % 2 == 0)
        {
            printf("%d is even.\n", number);
        }
        else
        {
            printf("%d is odd.\n", number);
        }


        printf("If you want to do another operation, click (y or n)? ");
        scanf("%s", &yesOrNo);
    }
    while(yesOrNo == 'y');



}

