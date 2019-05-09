
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include <stdlib.h>
#include <stdio.h>


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
			return 'B'; //équipe noire
		}
		if(caseD==pionW[i]){

			return 'W'; //équipe blanche
		}

	}
}




bool VerifPionPetit(int pionW[20], int pionB[20], int kingW[20], int kingB[20] , int caseD){ //vérifie la case la plus petite(gauche)
	Joueur(pionW[20],pionB[20],caseD);

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
		return false;

	}
	else
		return true;
}



void VerifPionGrand(int pionW[20], int pionB[20], int kingW[20], int kingB[20] , int caseD){ //vérifie la case la plus grande(droite)
	Joueur(pionW[20],pionB[20],caseD);

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
		return false;

	}
	else
		return true;
}

void VerifKing(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , int caseD, int caseA){ //vérifie la case d'arrivée de la reine

	int a=0,i=1;
	int pionWX[20],pionWY[20],pionBX[20],pionBY[20],kingWX[20],kingWY[20],kingBX[20],kingBY[20];
	for(i=1;i<21;i++){
		if(caseD==kingW[i]||caseD==kingB[i]){
		if(caseA==pionW[i]||caseA==pionB[i]||caseA==kingW[i]||caseA==kingB[i]){a=1;}		
		else{ 
		conversion_plateau(pionW[20],pionWX[20],pionWY[20]);
		conversion_plateau(pionB[20],pionBX[20],pionBY[20]);
		conversion_plateau(kingW[20],kingWX[20],kingWY[20]);
		conversion_plateau(kingB[20],kingBX[20],kingBY[20]);
				
		}	
		}
	}




	if(a=1){
		return false;
	}
	else
		return true;
}


void conversion_plateau(int pion_dep[20], int pion_arr_X[20], int pion_arr_Y[20]){ // convertit le plateau en 10*10 pour un groupe de pion

// Y = position verticale, X = position horizontale

    for(int i=1;i<21;i++){
        if( pion_dep[i]==0){
            pion_arr_X[i]=0;
            pion_arr_Y[i]=0;
        }
        else{
            pion_arr_Y[i]= ((pion_dep[i]-1)/5 +1); // donne la ligne

            if(pion_dep[i]%10<=5){
                if(pion_dep[i]%5==0){pion_arr_X[i]= 10;}
                else{ pion_arr_X[i]= ((pion_dep[i]%5)*2);}
                    // donne la colonne
            }
            if(pion_dep[i]%10>5){
                if(pion_dep[i]%5==0){pion_arr_X[i]= 9;}
                else{ pion_arr_X[i]= ((pion_dep[i]%5 )*2-1);}
                    // donne la colonne
            }
        }
    }
}

void passage_dame(int pionW[20], int pionB[20],int kingW[20], int kingB[20]){//transformation d'une dame en reine si elle atteint la fin de la grille
	for(int i=1;i<21;i++){
		if(pionW[i]==1||pionW[i]==2||pionW[i]==3||pionW[i]==4||pionW[i]==5){kingW[i]=pionW[i];
			pionW[i]=0;}
		else if(pionB[i]==46||pionB[i]==47||pionB[i]==48||pionB[i]==49||pionB[i]==50){kingB[i]=pionB[i];
			pionB[i]=0;}
	}
}

int nb_pion(int pion[20],int king[20]){
	nb=0;
	for(int i=1;i<21;i++){
		if(pion[i]!=0||king[i]!=0){nb++;}
	}
	return nb;
}



