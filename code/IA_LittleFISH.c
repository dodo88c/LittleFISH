#include <stdio.h>
#include "regles_verif.h"
#include "interface.h"
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>




int main(){

	int pionW[20]; //initialisation des pions blanc
	int pionB[20]; //noir

	int kingW[20]; //initialisation des reines blanche
	int kingB[20]; //noir
	int init,noir=1,blanc=50;	
	for(init=1;init<21;init++){ //initialisation de la partie
		kingW[init]=0;
		kingB[init]=0;
		pionW[init]=blanc;
		pionB[init]=noir;
		blanc--;
		noir++;
	}
	affichage(pionW[],pionB[],kingW[],kingB[]); //affichage grille

printf("test 1 \n");
printf("test 2, %i", pionW[6]);
printf("test 1 \n\n");

    init(pionW, pionB, kingW, kingB);

printf("test 2, %i\n\n\n ", pionW[6]);

	affichage(pionW, pionB, kingW, kingB);

printf("test 3 \n\n\n");


printf("	%i		%i		%i		%i		%i \n",pionW[1],pionW[2],pionW[3],pionW[4],pionW[5]);
printf("%i		%i		%i		%i		%i	 \n",pionW[6],pionW[7],pionW[8],pionW[9],pionW[10]);
printf("	%i		%i		%i		%i		%i\n",pionW[11],pionW[12],pionW[13],pionW[14],pionW[15]);
printf("%i		%i		%i		%i		%i	 \n",pionW[16],pionW[17],pionW[18],pionW[19],pionW[20]);


}
