#include <stdio.h>
#include "regles_verif.h"
#include "interface.h"
#include "communication_joueur.h"
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>




int main(){

	int pionW[20]; //initialisation des pions blanc
	int pionB[20]; //noir

	int kingW[20]; //initialisation des reines blanche
	int kingB[20]; //noir

	int variableA;

	do{
		variableA = lancement(pionW, pionB, kingW, kingB); // message de début
	}while(variableA!=0 || variableA!=1 || variableA!=2);

	char equipe;
	if(variableA==0){  equipe = 'A'; } // configuration d'equipe standard (le joueur joue les blancs, l'IA les noirs)
	if(variableA==1){  equipe = 'B'; } //inverse


	init(pionW, pionB, kingW, kingB);  // crée le plateau

	affichage(pionW, pionB, kingW, kingB, equipe);











}
