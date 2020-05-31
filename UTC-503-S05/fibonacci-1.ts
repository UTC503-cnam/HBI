interface Iterateur<T>
{
    aUnSuivant(): boolean;
    suivant(): T;
}

class Fibonacci implements Iterateur <number> {

    private nb_max : number;
    private nb_current : number;
    private nb_min_1 : number;
    private nb_min_2 : number;

    constructor (nb_max : number)
        {
            this.nb_max = nb_max;
            this.nb_current = 0;
            this.nb_min_1 = 1;
            this.nb_min_2 = 0;
        }

    aUnSuivant () : boolean 
        {
            return this.nb_current < this.nb_max;
        }
    suivant () : number 
        {
            let current; 
            if (this.nb_current < 2)
                {
                    current = this.nb_current;
                }
            else
                {
                    current = this.nb_min_1 + this.nb_min_2;
                    this.nb_min_2 = this.nb_min_1;
                    this.nb_min_1 = current ;
                }
            this.nb_current ++;
            return current;
        }
}

let f = new Fibonacci(10);
while (f.aUnSuivant())
    {
        console.log(`${f.suivant()},`);
    }
