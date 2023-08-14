#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row , x=1 ,Row_half ;

    printf("Please Enter Number of Row : ");
    scanf ("%i",&Row);

    Row_half = Row/2 ;

    for ( count = 1 ; count <= Row_half ; count++ )
    {
        /*for ( count1 = Row_half ; count1 > count ; count1--)
        {
            printf(" ");
        }*/
        for ( count2 = 1 ; count2 <= x ; count2++ )
        {
            if ( count2%2 != 0 )
                printf("*");
            else
                printf(" ");
        }
        x+=2;
        printf("\n");
    }
    x-=4;

    for ( count = 1 ; count < Row_half ; count++ )
    {
        /*for ( count1 = 1 ; count1 < count ; count1++)
        {
            printf(" ");
        }*/
        for ( count2 = x ; count2 >= 1 ; count2-- )
        {
            if ( count2%2 != 0 )
                printf("*");
            else
                printf(" ");
        }
        x-=2;
        printf("\n");
    }
    return 0;
}
