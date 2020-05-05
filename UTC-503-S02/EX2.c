#include <stdio.h>
#include <stdlib.h>

void main () 
{
    int n = 5;
    int factorielle = n;
	int i = n ;

    for (i=n; i>1; i--)
    {
        factorielle *= (i-1);
    }
     printf ("La factorielle de %d est = %d\n", n, factorielle);
    
}
