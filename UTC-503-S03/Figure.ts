abstract class Figure 
{
 private nb_cote : number; //nbre de coté
 protected cote : number; // longueur coté 

 /*public A : number; // hauteur triangle
 public Diagonale1 : number; //longueur Diagonale 1
 public Diagonale2 : number; //longueur Diagonale 2
 public Aire : number; 
 public Perimetre : Number;
 public TypeFigure : string;
 public t_Triangle : boolean; //type figure
 public t_Losange : boolean; //type figure*/

  constructor ( nb_cote : number, cote : number) 
    {
      this.nb_cote = nb_cote;
      this.cote = cote;
    }
  abstract Aire ();
  perimetre () 
    {
      return this.nb_cote * this.cote;
    }

  donnes ()
    {
      return (`Aire = ${this.Aire()}, Périmètre = ${this.perimetre()}`);
    }
}

class Triangle extends Figure 
{
  constructor (cote : number) 
  {
    super (3, cote);
  }
  Aire ()
  {
    return Math.pow(this.cote, 2) * Math.pow(3, 0.5) / 4;
  }
  donnes ()
  {
    return "Type de figure = Triangle" + super donnes();
  }
}

class Losange extends Figure 
{
  d1 : number;
  d2 : Number;
  constructor (d1 : number, d2 : number) 
  {
    super(4, Math.pow(Math.pow(d1 / 2, 2) + Math.pow(d2 / 2, 2), 0.5));
    this.d1 = d1;
    this.d2 = d2;
  }
  carre ()
  {
    return this.d1 == this.d2;
  }

  Aire ()
  {
    return this.d1 * this.d2 / 2;
  }

  donnes () 
  {
    return "Type de figure = Losange" + super donnes();
  }
}

let t1 = new Triangle(5);
let t2 = new Triangle(10);
let l1 = new Losange(5, 6);
let l2 = new Losange(4, 4);

let figures:Figure[] = [t1, t2, l1, l2];
for(let f of figures)
{
  console.log(f.donnes());
}
  
