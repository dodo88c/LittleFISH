#include <stdio.h>
#include fonction.h;
#include <stdlib.h>
#include <time.h>
#include <interface.h>




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


}

