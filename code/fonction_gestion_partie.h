

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include <stdlib.h>
#include <stdio.h>


void savegame(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , int tour){     // ecrit une ligne dans le ficier

        FILE* fichier = NULL;

        fichier = fopen("dossier/"savegame".txt", "a+");  // option a: ajoute des lignes à la fin


       long ftell(FILE* pointeurSurFichier); //Elle renvoie la position actuelle du curseur sous la forme d'un long:





       fprintf(fichier, "%d              %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d           %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &tour,
       &pionW[0], &pionW[1], &pionW[2], &pionW[3], &pionW[4], &pionW[5], &pionW[6], &pionW[7], &pionW[8], &pionW[9], &pionW[10], &pionW[11], &pionW[12], &pionW[13], &pionW[14], &pionW[15], &pionW[16], &pionW[17], &pionW[18], &pionW[19],
        &pionB[0], &pionB[1], &pionB[2], &pionB[3], &pionB[4], &pionB[5], &pionB[6], &pionB[7], &pionB[8], &pionB[9], &pionB[10], &pionB[11], &pionB[12], &pionB[13], &pionB[14], &pionB[15], &pionB[16], &pionB[17], &pionB[18], &pionB[19],
         &kingW[0], &kingW[1], &kingW[2], &kingW[3], &kingW[4], &kingW[5], &kingW[6], &kingW[7], &kingW[8], &kingW[9], &kingW[10], &kingW[11], &kingW[12], &kingW[13], &kingW[14], &kingW[15], &kingW[16], &kingW[17], &kingW[18], &kingW[19],
          &kingB[0], &kingB[1], &kingB[2], &kingB[3], &kingB[4], &kingB[5], &kingB[6], &kingB[7], &kingB[8], &kingB[9], &kingB[10], &kingB[11], &kingB[12], &kingB[13], &kingB[14], &kingB[15], &kingB[16], &kingB[17], &kingB[18], &kingB[19], );





}
