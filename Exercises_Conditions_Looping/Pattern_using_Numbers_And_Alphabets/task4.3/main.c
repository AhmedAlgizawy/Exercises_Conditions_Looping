#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row , x=1 , y=1 , Num ;

    printf("Please Enter Number of Row : ");
    scanf ("%i",&Row);

    for ( count = 1 ; count <= Row ; count++ )
    {
        for ( count1 = Row ; count1 >= count ; count1-- )
        {
            printf ("   ");
        }
        Num=1;
        for ( count2 = 1 ; count2 <= x ; count2++ )
        {
            if ( count2 < y )
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
        printf("\n");
    }
    return 0;
}
