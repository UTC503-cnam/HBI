#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    int n = 5;
	int factorielle = n;
	int i = n ;

    while (i > 1)
    {
        factorielle = factorielle * (i-1);
		i = (i-1);    
        
    }
     printf ("La factorielle de %d est = %d\n", n, factorielle);
    return EXIT_SUCCESS;
}
