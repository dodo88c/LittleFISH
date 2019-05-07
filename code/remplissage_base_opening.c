#include <stdio.h>
#include fonction.h;
#include <stdlib.h>
#include <time.h>




int main(){

    int n=0; i=0, j=0, k=0, l=0;

    printf("entrer le le nombre de tour de la base opening à generer");                               // demande la valeur de la table à remplir
    scanf(n);

    while(a<=0 || a>10){
        printf("entrer le degré de la base à generer, entre 1 et 10");
        scanf(n);                                                                 //                                       exemple: 5
    }

// declaration de toute les configurations d'equipes:





    void init(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){

    // ici toute les configurations d'equipes sont faite.

                int compteur[n-1]          //  ex n=7 : tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]      tableau compteur kilometrique

                for(int ta=0 , ta < n , ta++){
                    compteur[ta]= ta+1;
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
