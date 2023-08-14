#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , x=1 , Row , half_number_of_row ;

    printf("Please Enter Odd Number of Row : ");
    scanf ("%i", &Row);

    if ( Row%2 == 0 )
    {
        printf("Error \"This is even number\" \n ");
    }
    else
    {

        half_number_of_row=(Row/2)+1;

    for ( count=1 ; count<=half_number_of_row ; count++ )
    {
        for ( count1=half_number_of_row ; count1>count ; count1-- )
        {
            printf("  ");
        }
        for ( count2=1 ; count2<=x ; count2++ )
        {
            if ( count2==1 || count2==x || count2==((x/2)+1) || count==half_number_of_row )
                printf("* ");
            else
                printf("  ");
        }
        x+=2;
        printf("\n");
        printf("\n");
    }

    x-=4;

    for ( count=1 ; count<half_number_of_row ; count++ )
    {
        for ( count1=1 ; count1<=count ; count1++ )
        {
            printf("  ");
        }
        for ( count2=1 ; count2<=x ; count2++ )
        {
            if ( count2==1 || count2==x || count2==((x/2)+1) )
                printf("* ");
            else
                printf("  ");
        }
        x-=2;
        printf("\n");
        printf("\n");
    }

    }

    return 0;
}
