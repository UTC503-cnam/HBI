class ZooAnimal {
    nom: string;
    age: number;
    poids: number;
    quantiteNourritureTotale: number;
    bienNourri: boolean;
    
    constructor(nom: string, age: number, poids: number) {
        this.nom = nom;
        this.age = age;
        this.poids = poids;
        this.quantiteNourritureTotale = 0;
        this.bienNourri = false;
    }

    nouvelleJournee() {
        this.quantiteNourritureTotale = 0;
        this.bienNourri = false;
    }

    recoitNourriture(quantite: number) {
        this.quantiteNourritureTotale += quantite;
        if (this.quantiteNourritureTotale > (this.poids / 5)) {
            this.bienNourri = true;
        } else {
            this.bienNourri = false;
        }
    }

    etatAlimentation() {
        let etat = this.nom + ", " + this.age + " ans,  a reçu " + this.quantiteNourritureTotale + "Kg de nourriture."
        if (this.bienNourri) {
            etat += " " + this.nom + " est bien nourri.";
        }
        return etat;
    }
}

let flipper = new ZooAnimal("Flipper", 30, 150);
let pandi = new ZooAnimal("Pandi", 10, 80);

flipper.nouvelleJournee();
pandi.nouvelleJournee();
flipper.recoitNourriture(10);
pandi.recoitNourriture(10);
flipper.recoitNourriture(25);

// Remplacer console.log par alert pour un usage dans le playground
console.log(flipper.etatAlimentation());
console.log(pandi.etatAlimentation());
