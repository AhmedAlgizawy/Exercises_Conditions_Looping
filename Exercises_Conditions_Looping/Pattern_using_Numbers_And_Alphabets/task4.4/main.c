#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row , Num=1 , x=1 , star ;

    printf("Please Enter Number of Row : ");
    scanf ("%i",&Row);
    star = 8 ;

   for ( count = Row ; count >=1 ; count-- )
    {
        for ( count1 = 1 ; count1 <= star ; count1++)
        {
            printf("*");
        }

        for ( count2 = 1 ; count2 <= x ; count2++ )
        {
            if ( (count2%2)==0 )
                printf("*");
            else
                printf("%i",Num);
        }

        for ( count1 = 1 ; count1 <= star ; count1++)
        {
            printf("*");
        }
        x+=2;
        Num++;
        star--;
        printf("\n");
    }
    return 0;
}
