#include <stdio.h>
void main ()
{
    int rows;
    int col;
    printf ("enter the values of rows and col\n");
    scanf ("%d %d",&rows, &col);
    for (int i=1;i<=rows;i++)
    {
        for (int j=1;j<=col;j++)
        {
            printf ("* ");
        }
        printf ("  \n");
    }
}