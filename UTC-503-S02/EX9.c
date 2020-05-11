/*https://www.calormen.com/jslogo/*/
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
