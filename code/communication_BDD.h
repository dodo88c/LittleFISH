#include <stdio.h>
#include "regles_verif.h"
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>



void ecriture_fichier(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , char nom_fichier){     // ecrit une ligne dans le ficier

        FILE* fichier = NULL;

        fichier = fopen("dossier/"nom_fichier".txt", "a+");  // option a: ajoute des lignes à la fin


       long ftell(FILE* pointeurSurFichier); //Elle renvoie la position actuelle du curseur sous la forme d'un long:






       fprintf(fichier, "%d              %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d           %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d      %d ", &ligne,
       &pionW[0], &pionW[1], &pionW[2], &pionW[3], &pionW[4], &pionW[5], &pionW[6], &pionW[7], &pionW[8], &pionW[9], &pionW[10], &pionW[11], &pionW[12], &pionW[13], &pionW[14], &pionW[15], &pionW[16], &pionW[17], &pionW[18], &pionW[19],
        &pionB[0], &pionB[1], &pionB[2], &pionB[3], &pionB[4], &pionB[5], &pionB[6], &pionB[7], &pionB[8], &pionB[9], &pionB[10], &pionB[11], &pionB[12], &pionB[13], &pionB[14], &pionB[15], &pionB[16], &pionB[17], &pionB[18], &pionB[19],
         &kingW[0], &kingW[1], &kingW[2], &kingW[3], &kingW[4], &kingW[5], &kingW[6], &kingW[7], &kingW[8], &kingW[9], &kingW[10], &kingW[11], &kingW[12], &kingW[13], &kingW[14], &kingW[15], &kingW[16], &kingW[17], &kingW[18], &kingW[19],
          &kingB[0], &kingB[1], &kingB[2], &kingB[3], &kingB[4], &kingB[5], &kingB[6], &kingB[7], &kingB[8], &kingB[9], &kingB[10], &kingB[11], &kingB[12], &kingB[13], &kingB[14], &kingB[15], &kingB[16], &kingB[17], &kingB[18], &kingB[19], &ligne_suiv );





}


int cmp_tab(int *tab1,int *tab2,int taille){ for(i=0;i<taille;i++) { if (tab1[i]!=tab2[i]) return 0; } return 1; }



int recherche_suivant_fichier(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , int ligne, char nom_fichier){    // recherchye une configuration d'equipe, revoie la configuration suivante

        FILE* fichier = NULL;

        fichier = fopen("dossier/"nom_fichier".txt", "r");

        int tabA[20], tabB[20], TabC[20], tabD[20];
        int ligne_suiv;

        if (fichier != NULL){

                           // numero    |               pionW                                                     |
                fscanf(fichier, "%d              %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d           %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d      %d ", &ligne,
                &tabA[0], &tabA[1], &tabA[2], &tabA[3], &tabA[4], &tabA[5], &tabA[6], &tabA[7], &tabA[8], &tabA[9], &tabA[10], &tabA[11], &tabA[12], &tabA[13], &tabA[14], &tabA[15], &tabA[16], &tabA[17], &tabA[18], &tabA[19],
                 &tabB[0], &tabB[1], &tabB[2], &tabB[3], &tabB[4], &tabB[5], &tabB[6], &tabB[7], &tabB[8], &tabB[9], &tabB[10], &tabB[11], &tabB[12], &tabB[13], &tabB[14], &tabB[15], &tabB[16], &tabB[17], &tabB[18], &tabB[19],
                  &tabC[0], &tabC[1], &tabC[2], &tabC[3], &tabC[4], &tabC[5], &tabC[6], &tabC[7], &tabC[8], &tabC[9], &tabC[10], &tabC[11], &tabC[12], &tabC[13], &tabC[14], &tabC[15], &tabC[16], &tabC[17], &tabC[18], &tabC[19],
                   &tabD[0], &tabD[1], &tabD[2], &tabD[3], &tabD[4], &tabD[5], &tabD[6], &tabD[7], &tabD[8], &tabD[9], &tabD[10], &tabD[11], &tabD[12], &tabD[13], &tabD[14], &tabD[15], &tabD[16], &tabD[17], &tabD[18], &tabD[19], &ligne_suiv );


                tyekkejtfyjeryjuyerjkyjkuyer// ecrire comparaison       tab VS pion

                fclose(fichier);
        }


}
