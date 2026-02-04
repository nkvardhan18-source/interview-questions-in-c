#include <stdio.h>
void main ()
{
    int weekend;
    int cigar ;
    printf ("enter the value of weekend and cigar\n");
    scanf ("%d %d",&weekend,&cigar);
    if (weekend ==1)
    {
        if (cigar>=40)
        {
            printf ("true");
        }
        else 
        {
            printf ("false");
        }
    }
    else
    {
        if (cigar>=40&& cigar<=60)
        {
            printf ("true");
        }
        else
        {
            printf("false");
        }
    }
}