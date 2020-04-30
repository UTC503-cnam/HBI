#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) 
{
    int n = 5;
	int factorielle = n;
	int i = n;

    if (n != 0)
    {
        do 
        {            
            i--;
            factorielle = factorielle * i;
        }
        while (i > 1);
    }
    else
    {
        factorielle = 0;
    }
    printf ("La factorielle de %d est = %d\n", n, factorielle);
    return EXIT_SUCCESS;
}
