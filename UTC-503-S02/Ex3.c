#include <stdio.h>
#include <stdlib.h>

void factorielle (int n)
{
  int i, fact = 1;
  for (i=1; i<=n; i++)
  {
    fact *= i;
  }
  printf ("Factorielle de %d = %d\n", n, fact);  
}
 int main (int argc, char* argv[])
{
  factorielle (5);
  return EXIT_SUCCESS;
}
  
