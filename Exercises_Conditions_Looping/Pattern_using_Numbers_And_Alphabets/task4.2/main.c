#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , x=1 , y=1 , Row ;
    unsigned char Letter ;

    printf ("Please Enter Number of Row : ");
    scanf ("%i", &Row );

    for ( count = 1 ; count <= Row ; count++ )
    {
        Letter = 'A';

        for ( count1 = 1 ; count1 <=x ; count1++ )
        {
            if ( count1 < y)
            {
                printf (" %c ",Letter);
                Letter++;
            }
            else
            {
                printf (" %c ",Letter);
                Letter--;
            }
        }
        x+=2;
        y++;
        printf("\n");
    }
    return 0;
}
