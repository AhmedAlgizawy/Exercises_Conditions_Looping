#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , count3 , Row , x , half_number_of_row ;

    printf("Please Enter Number of Row : ");
    scanf ("%i",&Row);

    half_number_of_row = Row/2;
    x=Row-1;

    for ( count=1 ; count<=half_number_of_row ; count++ )
    {
        for ( count1=1 ; count1<=count ; count1++ )
        {
            printf("* ");
        }
        for ( count2=x ; count2>1 ; count2-- )
        {
            printf("  ");
        }
        x-=2;
        for ( count1=1 ; count1<=count ; count1++ )
        {
            printf("* ");
        }

        printf("\n");
        printf("\n");
    }

    x+=2;

    for ( count=1 ; count<=half_number_of_row ; count++ )
    {
        for ( count1=half_number_of_row ; count1>=count ; count1-- )
        {
            printf("* ");
        }
        for ( count2=1 ; count2<x ; count2++ )
        {
            printf("  ");
        }
        x+=2;
        for ( count1=half_number_of_row ; count1>=count ; count1-- )
        {
            printf("* ");
        }

        printf("\n");
        printf("\n");
    }
    return 0;
}
