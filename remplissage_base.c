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



    // la merde commence

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




                for( int za=1, za<51, za++){

                    for( int zb=1, zb<51, zb++){


                        for( int zc=1, zc<51, zc++){
                            for( int zd=1, zd<51, zd++){

                                if( za=zb || za=zc || za==zd || zb==zc || zb==zd || zc==zd ) {  NULL }      // passe si deux pions sont sur la meme case
                                else{


                                    if(k > 0){  }

                                    if(l > 0){  }


                                      test






                                }       // fermeture de "passe si deux pions sont sur la meme case"



                            }       // fermeture des positions de pions
                        }
                    }

                }




            }       // fermeture des configurations d'equipes
        }
    }












}
