#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , row , column ;

    printf ("select number of row \n");
    scanf ("%i",&row);

    printf ("select number of column \n");
    scanf ("%i",&column);


    for ( count=1 ; count <= row ; count++ )
    {
        for (count1 = 1 ; count1 <= column ; count1++)
        {
            if ( count == 1)
            {
                printf(" * ");
            }
            else if ( count == row)
            {

                printf(" * ");
            }
            else
            {
                if ( count1 == 1)
                {
                    printf(" * ");
                }
                else if (count1 == column)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }


        }
        printf ("\n");
    }
    printf ("\n");
    return 0;
}
