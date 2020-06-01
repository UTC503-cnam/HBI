let authors = [{ name: 'Franquin', country:'be' }, { name: 'Uderzo', country:'fr' }, { name: 'Hergé', country:'be' }];
let belgian_authors = authors.map (n => "M. " + n.name);
console.log(belgian_authors); 
