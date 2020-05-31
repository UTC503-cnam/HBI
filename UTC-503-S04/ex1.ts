var Trajet = /** @class */ (function () {
    function Trajet(nom, lenght) {
        this.nom = nom;
        this.length = lenght;
    }
    Trajet.prototype.toString = function () {
        return "Trajet " + this.nom + " de " + this.length + "Km";
    };
    return Trajet;
}());
var MinMax = /** @class */ (function () {
    function MinMax(t) {
        this.Min = t[0];
        this.Max = t[0];
        this.computeMinMax(t);
    }
    MinMax.prototype.computeMinMax = function (t) {
        for (var _i = 0, t_1 = t; _i < t_1.length; _i++) {
            var e = t_1[_i];
            this.Min = e.length < this.Min.length ? e : this.Min;
            this.Max = e.length > this.Max.length ? e : this.Max;
        }
    };
    MinMax.prototype.getMin = function () {
        return this.Min;
    };
    MinMax.prototype.getMax = function () {
        return this.Max;
    };
    return MinMax;
}());
var trajets = new Array(new Trajet("a", 271), new Trajet("b", 161), new Trajet("c", 314));
var trajetMinMax = new MinMax(trajets);
console.log("Le plus grand trajet est : " + trajetMinMax.getMax());
console.log("Le plus petit trajet est : " + trajetMinMax.getMin());
var chaines = new Array("chaineDe9", "chDe5", "grandeChaineDe16");
var chaineMinMax = new MinMax(chaines);
console.log("La plus grande chaine est : " + chaineMinMax.getMax());
console.log("La plus petite chaine est : " + chaineMinMax.getMin());
