#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , count2 , Row , Num=3 ;
    printf ("Please Enter the Number of Row : ");
    scanf ("%i",&Row);

    for ( count=1 ; count<=Row/2 ; count++ )
    {
        for ( count1=1 ; count1<=count ; count1++ )
        {
            printf ("%i",Num);
        }
        Num++;
        printf ("\n");
    }
    Num-=2;
    for ( count=Row/2 ; count>=1 ; count-- )
    {
        for ( count1=count ; count1>1 ; count1-- )
        {
            printf ("%i",Num);
        }
        Num--;
        printf ("\n");
    }
    return 0;
}
