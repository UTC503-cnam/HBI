Corrections des exercices du chapitres 2 sur la programmation impérative.
Ces corrections ne sont pas uniques.
Il y a d'autres possibilités.
Si vous avez un doute sur votre code, n'hésitez pas en m'en faire part.

Ex 1 :
  int main() {
  // Factorielle de N = N * (N – 1) * (N – 2) * (N – i) * … * 1
  int n = 5;
  int factorielle = 0;
  // Codez ici
  int i = n;
  factorielle = 1;
  boucle_debut:
  factorielle = factorielle * i;
  i = i - 1;
  if (i > 0)
    goto boucle_debut;
  printf("La factorielle de %d est égale à %d\n", n, factorielle);
}


Ex 2 :

int main() {
  // Factorielle de N = N * (N – 1) * (N – 2) * (N – i) * … * 1
  int n = 5;
  int factorielle = 0;
  // Codez ici
  factorielle = 1;
  int i = n;
  for(int i = 1; i <= n; i++)
    factorielle = factorielle * i;

  //
  // Ou encore
  // while (i > 0){
  //   factorielle = factorielle * i;
  //   i --;
  // }
  //
  // Ou
  //while(i > 0)
  //  factorielle *= i--;
  //
  printf("La factorielle de %d est égale à %d\n", n, factorielle);
}

Ex 3 :
int factorielle(int n){
  if (n == 0)
    return 0;
  // Sinon
  int factorielle = 1;
  while(n > 0){
    factorielle = factorielle * n;
    n = n - 1;
  }
  return factorielle;
}

int main() {
  // Factorielle de N = N * (N – 1) * (N – 2) * (N – i) * … * 1
  int z = 5;
  printf("La factorielle de %d est égale à %d\n", n, factorielle(z));
}

Ex 4 :

int factorielle(int n){
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;    
  return n * factorielle(n - 1);
}

int main() {
  // Factorielle de N = N * (N – 1) * (N – 2) * (N – i) * … * 1
  int n = 5;
  printf("La factorielle de %d est égale à %d\n", n, factorielle(5));
}

Ex 5 : Stack overflow

Ex 6 :

#define N 5 
void mapDouble(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] * 2;
}

void mapTriple(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] * 3;
}
void mapSquare(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] * e[i];
}
void mapMaximize3(int e[], int r[]){
  for (int i = 0; i < N; i++)
    if (e[i] <= 3)
      r[i] = e[i];
    else
      r[i] = 3;
    // Ou remplacer le if / else par l'opérateur ternaire ()?:
    r[i] = e[i] <= 3?e[i]:3;
}

int main() {
  int e[N] = {1, 5, 2, 4, 3};
  int r_double[N]; mapDouble(e, r_double); // r_double contiendra {2, 10, 4, 8, 6}
  int r_triple[N];
  mapTriple(e, r_triple); // r_triple contiendra {3, 15, 6, 12, 9}
  int r_square[N];
  mapSquare(e, r_square); // r_square contiendra {1, 24, 4, 16, 9}
  int r_maximize3[N];
  mapMaximize3(e, r_maximize3); // r_maximize3 contiendra {1, 3, 2, 3, 3};
}

Ex 7 :

Lambda fonction ou pointeur de fonction

#define N 5 
void mapDouble(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] * 2;
}

void mapTriple(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] * 3;
}
void mapSquare(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] * e[i];
}
void mapMaximize3(int e[], int r[]){
  for (int i = 0; i < N; i++)
    r[i] = e[i] <= 3?e[i]:3;
}

int my_double(int v){
    return v * 2;
}

int my_triple(int v){
    return v * 3;
}
  
void map(int e[], int r[], int (*pointeurSurFonction)(int)){
  for (int i = 0; i < N; i++)  
    r[i] = pointeurSurFonction(e[i]);
}

int main() {
  int e[N] = {1, 5, 2, 4, 3};
  int r_double[N]; 
  mapDouble(e, r_double); // r_double contiendra {2, 10, 4, 8, 6}
  int r_triple[N];
  mapTriple(e, r_triple); // r_triple contiendra {3, 15, 6, 12, 9}
  int r_square[N];
  mapSquare(e, r_square); // r_square contiendra {1, 24, 4, 16, 9}
  int r_maximize3[N];
  mapMaximize3(e, r_maximize3); // r_maximize3 contiendra {1, 3, 2, 3, 3};
  int r_double_2[N];
  // Passage de la fonction 'my_double' en paramètre de map
  map(e, r_double_2, &my_double);
  int r_double_2[N];
  // Passsage de la fonction 'my_triple' en paramètre de map
  map(e, r_double_2, &my_triple);
}

Ex 8 : Ce qui faudrait c'est le paradigme de programmation Objet,
car on pourrait redefinir la méthode 'trace' avec un comportement spécifique pour les classes Triangle et Etoile.
Ca s'appelle du polymorphisme.

Ex 9 : 

; Dessine 5 étoiles en Logo

to star
  ; dessine une étoile
  rt 18
  repeat 5 [ fd 50 rt 144 fd 50 lt 72]
  lt 18
end
to move
  ; se déplace à droite
  penup
  rt 90
  fd 150
  lt 90
  pendown
end
to n_stars :nombre
  ; dessine 5 étoiles
  repeat :nombre [ star move]
  ; cache la tortue
  hideturtle
end
to five_stars
  n_stars 5
end  
to init    
  clearscreen
  ; pinceau de couleur jaune
  setpencolor 6
  ; se placer à gauche de l'écran
  penup
  lt 90
  fd 300
  rt 90
  pendown
end
init
five_stars
hideturtle

