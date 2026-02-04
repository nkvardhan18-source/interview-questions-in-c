#include <stdio.h>
void main ()
{
    int big;
    int small;
    int goal;
    printf ("enter the values of  big small and goal\n");
    scanf ("%d %d %d",&big,&small,&goal);
    int required =goal/5;
    if (required<=big)
    {
        int rem=goal-(required*5);
        if (rem<=small)
        {
            printf ("%d",rem);
        }
        
        else
        {
            printf ("-1");
        }
    }
        else
        {
            int rem1=goal-(big*5);
            if (rem1<=small)
            {
                printf ("%d",rem1);
            }
            else
            {
                printf ("-1");
            }
        }
    }
.