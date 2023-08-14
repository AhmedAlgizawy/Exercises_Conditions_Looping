#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count , count1 , Row , Num=1 ;

    printf ("Please Enter the Number of Row : ");
    scanf ("%i",&Row);

    for ( count=1 ; count<=Row ; count++ )
    {
        for ( count1=1 ; count1<=count ; count1++ )
        {
            printf("%i ",Num);
            Num++;
        }
        printf("\n");
    }

    return 0;
}
