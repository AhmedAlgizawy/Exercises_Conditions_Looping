#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row , x=1 , Num ;
    printf ("Please Enter the Number of Row : ");
    scanf ("%i",&Row);

    for ( count=1 ; count<=Row/2 ; count++ )
    {
        Num=1;
        for ( count1=1 ; count1<=x ; count1++ )
        {
            if ( count1==1 || count1==x )
            {
                printf(" * ");
            }
            else
            {
                if ( count1 <= x/2 )
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
        }
        x+=2;
        printf ("\n");
    }
    x-=4;
   for ( count=Row/2 ; count>1 ; count-- )
    {
        Num=1;
        for ( count1=x ; count1>=1 ; count1-- )
        {
            if ( count1==1 || count1==x )
            {
                printf(" * ");
            }
            else
            {
                if ( count1 > (x/2)+1 )
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
        }
        x-=2;
        printf ("\n");
    }
    return 0;
}
