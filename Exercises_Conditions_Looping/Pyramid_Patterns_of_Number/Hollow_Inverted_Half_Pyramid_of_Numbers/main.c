#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row_Num , x , Row , Num ;

    printf ("select number of row \n");
    scanf ("%i",&Row_Num);

    x=1;
    Row=1;

    for ( count = Row_Num ; count >= 1 ; count--)
    {
        Num=Row;

        for ( count1 = 1 ; count1 <= count ; count1 ++)
        {
            if ( count ==1 || count == Row_Num)
            {
                printf(" %i ", Num);
                Num++;
            }
            else
            {
                if ( count1 == 1 || count1 ==count )
                {
                    printf(" %i ", Num);
                    Num++;
                }
                else{
                    printf("   ");
                    Num++;
                }
            }

        }
        printf("\n");
        Row++;
    }
    return 0;
}
