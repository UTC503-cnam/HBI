void main () 
{
int n = 5;
	int factorielle = n;
	int i = n ;
    while (i > 1)
    {
        factorielle = factorielle * (i-1);
		i = (i-1);    
    }
     printf("La factorielle de %d est égale à %d\n", n, factorielle);
}