#include <stdio.h>
#include <stdlib.h>

void main () 
{
    int n = 5;
	int factorielle = 1;
	int i = n;

    start:
        factorielle = factorielle * i;
        i = i - 1;
        if (i > 0)
    goto start;
    printf("La factorielle de %d = %d\n", n, factorielle);
    
}
