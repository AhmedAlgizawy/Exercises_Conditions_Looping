#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , Row , x=1 , y=1 , Num ;

    printf (" Please Enter Number of Row : ");
    scanf ("%i", &Row );

    for ( count = 1 ; count <= Row ; count++ )
    {
        Num=1;

        for ( count1 = 1 ; count1 <= x ; count1++ )
        {
            if ( count1 < y )
            {
                printf (" %i ",Num);
                Num++;
            }
            else
            {
                printf (" %i ",Num);
                Num--;
            }

        }

        x+=2;
        y++;
        printf ("\n");
    }

    return 0;
}
