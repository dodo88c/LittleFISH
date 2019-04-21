#include <stdio.h>
#include fonction.h;
#include <stdlib.h>
#include <time.h>




int main(){

    int a=0; i=0, j=0, k=0, l=0;

    printf("entrer le degré de la base à generer");                               // demande la valeur de la table à remplir
    scanf(a);

    while(a==0 || a==1 || a>20){
        printf("entrer le degré de la base à generer, entre 2 et 20");
        scanf(a);                                                                 //                                       exemple: 5
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
// declaration de toute les positions de pions:

            for(int ya=1, ya <= k, ya++ ){              // boucle nombre pion king W
              for(int yb=1, ya <= l, ya++ ){              // boucle nombre pion king B
                for(int yc=1, ya <= i, ya++ ){              // boucle nombre pion pion W
                  for(int yd=1, ya <= j, ya++ ){              // boucle nombre pion pion B    JUSQUE ICI TOUT EST BON



                    for( int za=1, za<51, za++){              // boucle plateau king W
                        for( int zb=1, zb<51, zb++){              // boucle plateau king B
                            for( int zc=1, zc<51, zc++){              // boucle plateau pion W
                                for( int zd=1, zd<51, zd++){              // boucle plateau pion B

                                    if( za=zb || za=zc || za==zd || zb==zc || zb==zd || zc==zd ) {  NULL }      // passe si deux pions sont sur la meme case
                                    else{



                                        if(k > 0){ kingW[ya]=za; }
                                        if(l > 0){ kingB[yb]=zb; }
                                        if(i > 0){ pionW[yc]=zc; }
                                        if(j > 0){ pionB[yd]=zd; }

                                        

                                        int pionW_next[20]; //initialisation des pions blanc SUIVANT
                                        int pionB_next[20]; //noir SUIVANT
                                        int kingW_next[20]; //initialisation des reines blanche SUIVANT
                                        int kingB_next[20]; //noir SUIVANT

                                        for(int x=1, x<21, x++){
                                          pionW_next[20]=0;
                                          pionB_next[20]=0;
                                          kingW_next[20]=0;
                                          kingB_next[20]=0;
                                        }

// A partir de maintenant toute les configurations de plateau seront executé.

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

                                    }       // fermeture de "passe si deux pions sont sur la meme case"

                        }  }  }  }       // fermeture des positions de pions   boucle plateau

            } } } }     // fermeture des positions de pions   nombre pion

          }       // fermeture des configurations d'equipes
        }
    }

  }
