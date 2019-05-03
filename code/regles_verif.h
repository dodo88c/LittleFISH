
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




void VerifPionPetit(int pionW[20], int pionB[20], int kingW[20], int kingB[20] , int caseD){ //vérifie la case la plus petite(gauche)
	Joueur(pionW[],pionB[],caseD);

	int a=0;

	if(Joueur=='B'){
		if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
			a=1;
		}
		if(a=0){
			for(int i=1;i<21;i++){
				if(caseD%10<=5){
				if(caseD+5==pionW[i] || caseD+5==pionB[i]||caseD+5==kingW[i] || caseD+5==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if(caseD+4==pionW[i] || caseD+4==pionB[i]||caseD+4==kingW[i] || caseD+4==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}
	if(Joueur=='W'){
		if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==1||caseD==2||caseD==3||caseD==4){
			a=1;
		}
		if(a=0){
			for(int i=1;i<21;i++){
				if(caseD%10<=5){
				if(caseD-5==pionW[i] || caseD-5==pionB[i]||caseD-5==kingW[i] || caseD-5==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if(caseD-6==pionW[i] || caseD-6==pionB[i]||caseD-6==kingW[i] || caseD-6==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}
	if(a=1){
		return False;

	}
	else
		return True;
}



void VerifPionGrand(int pionW[20], int pionB[20], int kingW[20], int kingB[20] , int caseD){ //vérifie la case la plus grande(droite)
	Joueur(pionW[],pionB[],caseD);

	int a=0;

	if(Joueur=='B'){
		if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
			a=1;
		}
		if(a=0){
			for(int i=1;i<21;i++){
				if(caseD%10<=5){
				if(caseD+6==pionW[i] || caseD+6==pionB[i]||caseD+6==kingW[i] || caseD+6==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if(caseD+5==pionW[i] || caseD+5==pionB[i]||caseD+5==kingW[i] || caseD+5==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}
	if(Joueur=='W'){
		if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==1||caseD==2||caseD==3||caseD==4||caseD==5){
			a=1;
		}
		if(a=0){
			for(int i=1;i<21;i++){
				if(caseD%10<=5){
				if(caseD-4==pionW[i] || caseD-4==pionB[i]||caseD-4==kingW[i] || caseD-4==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if(caseD-5==pionW[i] || caseD-5==pionB[i]||caseD-5==kingW[i] || caseD-5==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}
	if(a=1){
		return False;

	}
	else
		return True;
}

void VerifKing(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , int caseD){ //vérifie la case d'arrivée de la reine

	int a=0;














	if(a=1){
		return False;
	}
	else
		return True;
}


void conversion_plateau(int pion_dep[21], int pion_arr_X[11], int pion_arr_Y[11]){ // convertit le plateau en 10*10 pour un groupe de pion

    for(int i=1;i<21;i++){

        if( pion_dep[i]==0){
            pion_arr_X[i]

        }






}








int depl(int pionW[20], int pionB[20] , int caseD){
	rand

	return caseA; //retourne case d'arrivé
}
