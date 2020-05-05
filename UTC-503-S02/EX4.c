#include <stdio.h>
#include <stdlib.h>

void factorielle (int n)
{
	int factorielle = 1;
	int i = n;

    star_fact:
        factorielle = factorielle * i;
        i = i - 1;
        if (i > 0)
    goto star_fact;
    printf("La factorielle de %d = %d\n", n, factorielle); 
}

 int main (int argc, char* argv[])
{
  factorielle (5);
  return EXIT_SUCCESS;
}
  
