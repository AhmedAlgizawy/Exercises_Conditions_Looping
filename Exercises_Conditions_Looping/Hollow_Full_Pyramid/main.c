#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , row , x ;
    printf ("select number of row \n");
    scanf ("%i",&row);

    x=1;


    for ( count=row ; count >= 1 ; count --)
    {

        for ( count1 = 1 ; count1 <= count ; count1 ++)
        {
            printf(" ");
        }


        for ( count2 = 0 ; count2 < x  ; count2 ++)
        {

            if ( count == 1 || count == row )
            {
                if ( (count2 % 2) == 0)
                {
                    printf("*");
                }
                else
                {
                    printf (" ");
                }
            }

            else
            {
                if ( count2 == 0 || count2 == (x-1))
                    printf ("*");
                else
                    printf (" ");
            }


        }

        x+=2;

        printf ("\n");

    }
    return 0;
}
