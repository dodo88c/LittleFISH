

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

je rajoutte des fonction test pour voir si
sa marche
sa fonctionne
bonjour Oriane




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





pour n pion:



                int compteur[n-1]            tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]     // tableau compteur kilometrique

                for(int ta=0 , ta < n , ta++)
                    compteur[ta]= ta+1



                while( compteur[0] != 51 )                                                       // tant que toutes le cases n'ont pas été parcourue

                            for(int tb=(n-1) , tb >= 0 , tb--)
                              if(compteur[tb]=51){ compteur[tb]=1;  compteur[tb-1]++; }


                              // tri croissant dans le tableau
                              // test si deux valeurs voisines sont identiques

                                //instruction

                  compteur[n-1]++;
