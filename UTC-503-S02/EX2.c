#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    int n = 5;
    int factorielle = n;
    int i = n ;

    for (i=n; i>1; i--)
    {
        factorielle *= (i-1);
    }
     printf ("La factorielle de %d est = %d\n", n, factorielle);
    return EXIT_SUCCESS;
}
