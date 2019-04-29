
#include <stdio.h>

#include <stdlib.h>
#include <time.h>




void init(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){ //initialise le plateau avec les pions

    for(int i=1;i<21;i++){

        pionW[i]=i;
        pionB[i]=51-i;

        kingW[i]=0;
        kingB[i]=0;
    }
}




char Joueur(int pionW[20], int pionB[20] , int caseD){ //Donne l'équipe
	for(int i=1;i<21;i++){
		if(caseD==pionB[i]){
			return B; //équipe noire
		}
		if(caseD==pionW[i]){

			return W; //équipe blanche
		}

	}
}




void VerifP(int pionW[20], int pionB[20] , int caseD){ //vérifie la case la plus petite(gauche)
	Joueur(pionW[],pionB[],caseD);

	int a=0;

	if(Joueur=='B'){
		if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
			a=1;
		}
		for(int i=1;i<21;i++){
			if(caseD+4==pionW[i] || caseD+4==pionB[i] || a=1){
				return False; //case ocupée
			}
			else
				return True; //retourne case libre

		}

	}
	if(Joueur=='W'){
		if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==1||caseD==2||caseD==3||caseD==4){
			a=1;
		}
		for(int i=1;i<21;i++){
			if(caseD+4==pionW[i] || caseD+4==pionB[i] || a=1){
				return False; //case ocupée
			}
			else
				return True; //retourne case libre

		}

	}

}




void VerifG(int pionW[20], int pionB[20] , int caseD){ //vérifie la case la plus grande(droite)
	if
		return True; //retourne case libre
	esle
		return False; //case ocupée
}










int depl(int pionW[20], int pionB[20] , int caseD){
	rand

	return caseA; //retourne case d'arrivé
}
