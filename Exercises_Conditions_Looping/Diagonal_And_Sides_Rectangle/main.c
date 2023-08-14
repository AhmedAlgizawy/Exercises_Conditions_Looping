#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , count3 , Row , x , half_number_of_row ;

    printf("Please Enter Odd Number of Row : ");
    scanf ("%i",&Row);

    if ( Row % 2 == 0 )
        printf (" Error - This even number \n ");
    else
    {

        half_number_of_row = (Row/2)+1;
        x=Row;

    for ( count=1 ; count<=half_number_of_row ; count++ )
    {
        for ( count1=1 ; count1<=Row ; count1++ )
        {
            if ( count==1)
                printf("* ");
            else if ( count1 == 1 || count1== count || count1==Row || count1==x )
                printf("* ");
            else
                printf("  ");
        }
        x--;
        printf("\n");
        printf("\n");
    }

    x+=2;
    half_number_of_row--;

    for ( count=half_number_of_row ; count>=1 ; count-- )
    {
        for ( count1=1 ; count1<=Row ; count1++ )
        {
            if ( count==1)
                printf("* ");
            else if ( count1 == 1 || count1== count || count1==Row || count1==x )
                printf("* ");
            else
                printf("  ");
        }
        x++;
        printf("\n");
        printf("\n");
    }


    }



    return 0;
}
