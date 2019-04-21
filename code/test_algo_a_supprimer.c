

1) but: parcourir le plateau avec un nb inconnu de pion

toute les positions doivent etres parcourue


à analyser:
  Pour en revenir à ta question, pour simuler dynamiquement n boucles,
 il te faut un tableau de n cases.
 La ième case contiendra la valeur de l'indice de la ième boucle.
 Passer «au tour suivant» consistera donc à incrémenter ces valeurs en commençant par la fin.
 Le principe de base est celui d'un odomètre en fait.


ou alors:
fonction parcourir(tableau à n dimensions)
{
   Si n = 0 alors
      Retourner

   Pour i allant de 0 à taille(tableau)-1 faire
      parcourir(tableau[i])   // appel récursif de "parcourir"
                              // sur un tableau de dimension n-1
}






pour 2 pion:

  for (int i=1, i<51, i++)
    for (int i=1, i<51, i++)



pour 3 pion:

  for (int i=1, i<51, i++)
    for (int i=1, i<51, i++)
      for (int i=1, i<51, i++)


pour 4 pion:

  for (int i=1, i<51, i++)
    for (int i=1, i<51, i++)
      for (int i=1, i<51, i++)
        for (int i=1, i<51, i++)

pour 5 pion:

  for (int i=1, i<51, i++)
    for (int i=1, i<51, i++)
      for (int i=1, i<51, i++)
        for (int i=1, i<51, i++)
          for (int i=1, i<51, i++)


pour n pion:      ex:7


int tab[n-1]            tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]

  for(int j=j, j<n, j++)
    for (int i=1, i<51, i++)
tab[j]=i;
