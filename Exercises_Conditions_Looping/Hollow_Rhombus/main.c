#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , x=1 , Row ;

    printf("Please Enter Odd Number of Row : ");
    scanf ("%i", &Row);

    for ( count=1 ; count<=Row ; count++)
    {
        for ( count1=Row ; count1>count ; count1-- )
        {
            printf("  ");
        }
        for ( count2=1 ; count2<=Row ; count2++ )
        {
            if (  count2==1 || count2==Row || count==1 || count==Row )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}
