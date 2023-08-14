#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row , x=1 , Num=1 , y=1 ;
    printf ("Please Enter the Number of Row : ");
    scanf ("%i",&Row);

    for ( count=1 ; count<=Row/2 ; count++ )
    {
        for ( count1=1 ; count1<=x ; count1++ )
        {
            if (count1%2 != 0)
            {
                printf ("%i",Num);
                Num++;
            }
            else
                printf("*");
        }
        x+=2;

        printf ("\n");
    }

    x-=2;
    Num--;
    Num-=(x/2);
    y=Num;

    for ( count=Row/2 ; count>=1 ; count-- )
    {
        for ( count1=x ; count1>=1 ; count1-- )
        {
            if (count1%2 != 0)
            {
                printf ("%i",Num);
                Num++;
            }
            else
                printf("*");
        }
        x-=2;
        y-=(count-1);
        Num=y;
        printf ("\n");
    }
    return 0;
}
