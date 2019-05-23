#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "regles_verif.h"
#include "interface.h"
#include "communication_joueur.h"
#include "joueur_non_deterministe.h"
#include "fonction_gestion_partie.h"



int main(){

//	##################################### VARIABLE ############################################

	int pionW[20]; //initialisation des pions blanc
	int pionB[20]; //noir

	int kingW[20]; //initialisation des reines blanche
	int kingB[20]; //noir

	int variableA;

	char equipe = 'A'; //type a ou type B
	char equipe_IA = 'B'; // B ou W

	int NB_piece_Joueur=20;
	int NB_piece_IA=20;

	int pion_IA[20];
	int pion_Joueur[20];
	int king_IA[20];
	int king_Joueur[20];

	int tour=0;


//	##################################### CONFIGURATION ############################################

	do{
		variableA = lancement(pionW, pionB, kingW, kingB); // message de début
	}while(variableA!=0 || variableA!=1 || variableA!=2);


	if(variableA==0){  equipe = 'A'; equipe_IA = 'B'; } // configuration d'equipe standard (le joueur joue les blancs, l'IA les noirs)
	if(variableA==1){  equipe = 'B'; equipe_IA = 'W';} //inverse


	init(pionW, pionB, kingW, kingB);  // crée le plateau
	savegame(pionW, pionB, kingW, kingB, tour);
	affichage(pionW, pionB, kingW, kingB, equipe);





//	##################################### JEU ############################################

	if(equipe = 'B'){
		Joue_un_coup(pionW, pionB, kingW, kingB, joueur)
		tour++;
		passage_dame(pionW, pionB, kingW, kingB);
		affichage(pionW, pionB, kingW, kingB, equipe);
		savegame(pionW, pionB, kingW, kingB, tour);
	}


	do{

		conversion_equipe(pionW, pionB, kingW, kingB, pion_IA, pion_Joueur, king_IA, king_Joueur, equipe);
		demande_coup(pionW, pionB, kingW, kingB,pion_IA, pion_Joueur, king_IA, king_Joueur);
		tour++;
		passage_dame(pionW, pionB, kingW, kingB);
		affichage(pionW, pionB, kingW, kingB, equipe);
		savegame(pionW, pionB, kingW, kingB, tour);

		conversion_equipe(pionW, pionB, kingW, kingB, pion_IA, pion_Joueur, king_IA, king_Joueur, equipe);
		NB_piece_IA = nb_pion(pion_IA, king_IA);


		if{NB_piece_IA!=0){

			Joue_un_coup(pionW, pionB, kingW, kingB, equipe_IA)
			tour++;
			passage_dame(pionW, pionB, kingW, kingB);
			affichage(pionW, pionB, kingW, kingB, equipe);
			savegame(pionW, pionB, kingW, kingB, tour);
		}


		conversion_equipe(pionW, pionB, kingW, kingB, pion_IA, pion_Joueur, king_IA, king_Joueur, equipe);
		NB_piece_Joueur = nb_pion(pion_Joueur, king_Joueur);


	}while(NB_piece_Joueur==0 || NB_piece_IA=0);



//	##################################### fin du jeu ############################################

	if(NB_piece_Joueur==0){
		printf("L'IA a gagné......  Merveilleu" );
	}
	else if(NB_piece_IA==0){
		printf("Le joueur a gagné...... Dorian va devoir reprogrammer deux trois trucs" );
	}
	else{
		printf("On a un probleme Boss (fin de IA_LittleFISH)" );
	}





}
