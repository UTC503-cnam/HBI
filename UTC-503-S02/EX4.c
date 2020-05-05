#include <stdio.h>
#include <stdlib.h>

int factorielle (int n)
{
  if (n == 0)
  return 0;
  if (n == 1)
  return 1;
  return n * factorielle (n - 1);

}
 int main ()
{
  int f = 5;
  printf ("La factorielle de %d = %d\n", 5, factorielle (7));  
}
