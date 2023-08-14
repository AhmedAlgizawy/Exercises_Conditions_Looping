#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , row , x , y , Num ;

    printf ("select number of row \n");
    scanf ("%i",&row);

    x=1;
    y=1;

    for ( count = row ; count >= 1 ; count--)
    {
        for ( count1 = 1 ; count1 <= count ; count1 ++)
        {
            printf("   ");

        }

        Num=y;

        for ( count2 = 1 ; count2 <= x ; count2 ++)
        {

            if ( count2 < y )
            {
                printf(" %i ",Num);
                Num++;
            }
            else
            {
                printf(" %i ",Num);
                Num--;
            }

        }
        x+=2;
        y++;
        printf ("\n");

    }

    return 0;
}
