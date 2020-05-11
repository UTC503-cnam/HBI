#include <stdio.h>
#include <stdlib.h>

#define N 5
void mapDouble(int e[], int r[])
{
    int i;
    for (i=0; i < N; i++)
    {
      r[i] = e[i] * 2;
      printf ("%d ", r[i]);
    }
}

void mapTriple(int e[], int r[]){
  int i;
    for (i=0; i < N; i++)
    {
      r[i] = e[i] * 3;
      printf ("%d ", r[i]);
    }
}
void mapSquare(int e[], int r[]){
  int i;
    for (i=0; i < N; i++)
    {
      r[i] = e[i] * e[i];
      printf ("%d ", r[i]);
    }
}
void mapMaximize3(int e[], int r[])
{
  int i;
    for (i=0; i < N; i++)
    { if (e[i] <= 3)
      {
        r[i] = e[i];
      }
      else 
      if (e[i] > 3)
      {
        r[i] = 3;
      }
      printf ("%d ", r[i]);
    }
}

int main() {
  int e[N] = {1, 5, 2, 4, 3};
  int r_double[N]; 
  mapDouble(e, r_double);
  printf ("\n");
  int r_triple[N];
  mapTriple(e, r_triple);
  printf ("\n"); 
  int r_square[N];
  mapSquare(e, r_square);
  printf ("\n"); 
  int r_maximize3[N];
  mapMaximize3(e, r_maximize3); 
}
