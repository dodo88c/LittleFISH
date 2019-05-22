#include <stdio.h>
#include fonction.h;
#include <stdlib.h>
#include <time.h>












define fichier_txt = ENDGAME_1;








int main(){

    int n=0; i=0, j=0, k=0, l=0;

    printf("entrer le nombre de pion de la table de la base endgame à generer");                               // demande la valeur de la table à remplir
    scanf(n);

    while(a<=0 || a==1 || a>20){
        printf("entrer le nombre de pion de la table de la base à generer, entre 2 et 20");
        scanf(n);                                                                 //                                       exemple: 5
    }

// declaration de toute les configurations d'equipes:

    for(int k=0, k < a, k++){                   // reine W de 0 à  a-1                                                      exemple: 1
        for(int l=0, l < (a-k), l++{            // reine B de 0 à  a-k-1                                                    exemple: 2

            int i=1, j=1;
            if(k>0){ int i=0;}
            if(l>0){ int i=0;}

            for( i; i <= (a-k-l); i++){         // pion W  de 0 si reine W >0, sinon de 1  à a-k-l                           exemple: 2
            int j= (a-k-l)-i+1 ;                // pion B  de 0 si reine B >0, sinon de 1  à a-k-l+1 (inverse de i)          exemple: 0

                int pionW[i]; //initialisation des pions blanc
                int pionB[j]; //noir
                int kingW[k]; //initialisation des reines blanche
                int kingB[l]; //noir

    // ici toute les configurations d'equipes sont faite.

                int compteur[n-1]          //  ex n=7 : tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]      tableau compteur kilometrique

                for(int ta=0 , ta < n , ta++){
                    compteur[ta]= ta+1;     //  ex tab[0] = 1 ,tab[1] = 2, tab[2] = 3... evite les configuration deja etablie
                }


                while( compteur[0] != 51 ){}                                                       // tant que toutes le cases n'ont pas été parcourue

                    for(int tb=(n-1) , tb >= 0 , tb--){
                      if(compteur[tb]=51){ compteur[tb]=1;  compteur[tb-1]++; }
                    }

                              // tri croissant dans le tableau
                              // test si deux valeurs voisines sont identiques


// A partir de maintenant toute les configurations de plateau seront executé.






                                //instruction
                                // ici il faut jouer jusqu'a perdre une seule piece du camp des blancs





// à partir de maintenant on convertit les tableaux de taille i,j,k,l en taille 20

                    int pionW_comp[20]; //initialisation des pions blanc
                    int pionB_comp[20]; //noir
                    int kingW_comp[20]; //initialisation des reines blanche
                    int kingB_comp[20]; //noir
                    for(int x=1, x<21, x++){
                        if(x<=i){ pionW_comp[x]=pionW[x]; }
                        else{ pionW_comp[x]=0; }
                        if(x<=j){ pionB_comp[x]=pionB[x]; }
                        else{ pionB_comp[x]=0; }
                        if(x<=k){ kingW_comp[x]=kingW[x]; }
                        else{ kingW_comp[x]=0; }
                        if(x<=l){ kingB_comp[x]=kingB[x]; }
                        else{ kingB_comp[x]=0; }
                    }
// les tableaux de taille i,j,k,l ont été convertit en taille 20




// A partir de maintenant on envoi les confgurations tab et tab_next dans la base de donnée

// les configurations on été envoyé


                    compteur[n-1]++;


                  }     //while

              }       // fermeture des configurations d'equipes

     }   }      // fermeture des configurations d'equipes

} //main
