#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>



void init(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){ //initialise le plateau avec les pions

    for(int i=0;i<20;i++){

        pionB[i]=i+1;
        pionW[i]=50-i;

        kingW[i]=0;
        kingB[i]=0;
    }
    printf(" initialisation effectuée \n ");

}
//OK


char Joueur(int pionW[20], int pionB[20], int kingW[20], int kingB[20], int caseD){ //Donne l'équipe


	for(int i=0;i<20;i++){
		if(caseD==pionB[i] || caseD==kingB[i]){
			return 'B'; //équipe noire
		}

		if(caseD==pionW[i] || caseD==kingW[i]){

			return 'W'; //équipe blanche
		}

	}
}
//OK

void conversion_equipe(int pionW[20], int pionB[20], int kingW[20], int kingB[20],int pion_IA[20], int pion_Joueur[20], int king_IA[20], int king_Joueur[20], char equipe){

        if(equipe == 'W'){
                pion_Joueur[20] = pionW[20];
                king_Joueur[20] = kingW[20];
                pion_IA[20] = pionB[20];
                king_IA[20] = kingB[20];
        }

        if(equipe == 'B'){
                pion_Joueur[20] = pionB[20];
                king_Joueur[20] = kingB[20];
                pion_IA[20] = pionW[20];
                king_IA[20] = kingW[20];
        }


}
//OK


bool VerifPionPetit(int pionW[20], int pionB[20], int kingW[20], int kingB[20] , int caseD, char equipe){ //vérifie la case la plus petite(gauche)
	int a=0;
	if(equipe=='B'){

		if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
			a=1;
		}

		if(a==0){
			for(int i=0;i<20;i++){
				if(caseD%10<=5){

    				if( ((caseD+5)==pionW[i]) || ((caseD+5)==pionB[i]) || ((caseD+5)==kingW[i]) || ((caseD+5)==kingB[i]) ){

    					a=1; //case ocupée
    				}

				}

				if(caseD%10>5){

    				if((caseD+4)==pionW[i] || (caseD+4)==pionB[i]||(caseD+4)==kingW[i] || (caseD+4)==kingB[i]){
    					a=1; //case ocupée
    				}
				}
			}
		}


	}
	if(equipe=='W'){

		if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==1||caseD==2||caseD==3||caseD==4||caseD==5){
			a=1;
		}
		if(a==0){
			for(int i=0;i<20;i++){
				if(caseD%10<=5){
				if((caseD-5)==pionW[i] || (caseD-5)==pionB[i]||(caseD-5)==kingW[i] || (caseD-5)==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if((caseD-6)==pionW[i] || (caseD-6)==pionB[i]||(caseD-6)==kingW[i] || (caseD-6)==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}

	if(a==1){
		return false;

	}
	else
		return true;
}



bool VerifPionGrand(int pionW[20], int pionB[20], int kingW[20], int kingB[20] , int caseD, char equipe){ //vérifie la case la plus grande(droite)
	int a=0;
	if(equipe=='B'){
		if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
			a=1;
		}
		if(a==0){
			for(int i=0;i<20;i++){
				if(caseD%10<=5){
				if((caseD+6)==pionW[i] || (caseD+6)==pionB[i]||(caseD+6)==kingW[i] || (caseD+6)==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if((caseD+5)==pionW[i] || (caseD+5)==pionB[i]||(caseD+5)==kingW[i] || (caseD+5)==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}
	if(equipe=='W'){
		if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==1||caseD==2||caseD==3||caseD==4){
			a=1;
		}
		if(a==0){
			for(int i=0;i<20;i++){
				if(caseD%10<=5){
				if((caseD-4)==pionW[i] || (caseD-4)==pionB[i]||(caseD-4)==kingW[i] || (caseD-4)==kingB[i]){
					a=1; //case ocupée
				}
				}
				if(caseD%10>5){
				if((caseD-4)==pionW[i] || (caseD-4)==pionB[i]||(caseD-4)==kingW[i] || (caseD-4)==kingB[i]){
					a=1; //case ocupée
				}
				}
			}
		}

	}
    printf("Verifpiongrand = %d \n",a );
	if(a==1){
		return false;

	}
	else{
		return true;
    }
}

/*void VerifKing(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , int caseD, int caseA){ //vérifie la case d'arrivée de la reine
	int a=0;
	int pionWX[20],pionWY[20],pionBX[20],pionBY[20],kingWX[20],kingWY[20],kingBX[20],kingBY[20];
	for(int i=0;i<20;i++){
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
	if(a==1){
		return false;
	}
	else
		return true;
}*/


void conversion_plateau(int pion_dep[20], int pion_arr_X[20], int pion_arr_Y[20]){ // convertit le plateau en 10*10 pour un groupe de pion

// Y = position verticale, X = position horizontale

    for(int i=0;i<20;i++){
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

void passage_dame(int pionW[20], int pionB[20],int kingW[20], int kingB[20], char equipe){//transformation d'une dame en reine si elle atteint la fin de la grille
	for(int i=0;i<20;i++){

        if(equipe == 'W'){
            if(pionW[i]==1||pionW[i]==2||pionW[i]==3||pionW[i]==4||pionW[i]==5){
                            kingW[i]=pionW[i];
    			pionW[i]=0;}
    		if(pionB[i]==46||pionB[i]==47||pionB[i]==48||pionB[i]==49||pionB[i]==50){
                            kingB[i]=pionB[i];
    			pionB[i]=0;}
        }
        if(equipe == 'B'){
            if(pionW[i]==1||pionW[i]==2||pionW[i]==3||pionW[i]==4||pionW[i]==5){
                            kingW[i]=pionW[i];
    			pionW[i]=0;}
    		 if(pionB[i]==46||pionB[i]==47||pionB[i]==48||pionB[i]==49||pionB[i]==50){
                            kingB[i]=pionB[i];
    			pionB[i]=0;}
        }

	}
    printf("equipe passage dame: %c\n", equipe );
}
//OK



int nb_pion(int pion[20],int king[20]){
	int nb=0;
	for(int i=0;i<20;i++){
		if(pion[i]!=0||king[i]!=0){nb++;}
	}
	return nb;
}

int manger_pion(int pionW[20], int pionB[20],int kingW[20], int kingB[20], int caseD, char equipe){ // verifie si un pion peut en manger un autre
	int a=0;

    bool VerifPP;
    bool VerifPG;
    bool VerifPP1=VerifPionPetit(pionW, pionB, kingW, kingB,(caseD),equipe);
    bool VerifPG1=VerifPionGrand(pionW, pionB, kingW, kingB,(caseD),equipe);

//a=1: le pion peut manger sur la case la plus petite , a=2: le pion peut manger sur la case la plus grande, a=3:le pion peut manger sur les deux case
// a=0; rien

if(VerifPP1== false){
	  for(int i=0;i<20;i++){
	    if(caseD%10<=5){
    	    if((equipe=='B')&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])){
        		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD+5),equipe);
        		if(VerifPP==true){a=1;}
    	    }
    	    else if((equipe=='W') && (((caseD-5)==pionB[i])||((caseD-5)==kingB[i]))){
        		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD-5),equipe);
        		if(VerifPP==true){
        		a=1;}
    	    }
	    }
	    if(caseD%10>5){
    	    if((equipe=='B')&&((caseD+4)==pionW[i]||(caseD+4)==kingW[i])){
        		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD+4),equipe);
        		if(VerifPP==true){
        		a=1;}
    	    }
    	    else if((equipe=='W') &&((caseD-6)==pionB[i]||(caseD-6)==kingB[i])){
        		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD-6),equipe);
        		if(VerifPP==true){
        		a=1;}
    	    }
  	    }
	  }
}
if(VerifPG1== false){
	  for(int i=0;i<20;i++){
	    if(caseD%10<=5){
	    if((equipe=='B')&&((caseD+6)==pionW[i]||(caseD+6)==kingW[i])){
		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD+6), equipe);
		if(VerifPG==true){
		a=2;}
	    }
	    else if((equipe=='W')&&((caseD-4)==pionB[i]||(caseD-4)==kingB[i])){
		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD-4), equipe);
		if(VerifPG==true){
		a=2;}
	    }
	    }
	    if(caseD%10>5){
    	    if((equipe=='B')&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])){
        		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD+5), equipe);
        		if(VerifPG==true){ a=2;}
    	    }
    	    else if((equipe=='W') && ((caseD-5)==pionB[i]||(caseD-5)==kingB[i])){
    		      VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD-5), equipe);
    		      if(VerifPG==true){ a=2;}
    	    }
  	    }
	  }
}


/*
	 for(int i=0;i<20;i++){

	    if(caseD%10<=5){
	    if(a=3){}                                                                  // cas a=3 pas fini
	    else if((equipe=='B')&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])){
		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPP==true){
		a=1;}
	    }
	    else if((equipe=='W')&&((caseD+5)==pionB[i]||(caseD+5)==kingB[i])){
		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPP==true){
		a=1;}
	    }
	    else if((equipe=='B')&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])){
		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPG==true){
		a=2;}
	    }
	    else if((equipe=='W')&&((caseD+5)==pionB[i]||(caseD+5)==kingB[i])){
		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPG==true){
		a=2;}
	    }
	    }

	    if(caseD%10>5){
	    if((equipe=='B')&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])){
		a=3;
	    }
	    else if((equipe=='W')&&((caseD+5)==pionB[i]||(caseD+5)==kingB[i])&&((caseD+5)==pionB[i]||(caseD+5)==kingB[i])){
		a=3;
	    }
	    else if(equipe=='B'&&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])&&((caseD+5)!=pionW[i]||(caseD+5)!=kingW[i])){
		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPP==true){
		a=1;}
	    }
	    else if(equipe=='W'&&((caseD+5)==pionB[i]||(caseD+5)==kingB[i])&&((caseD+5)!=pionB[i]||(caseD+5)!=kingB[i])){
		VerifPP = VerifPionPetit(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPP==true){
		a=1;}
	    }
	    else if(equipe=='B' &&((caseD+5)==pionW[i]||(caseD+5)==kingW[i])&&((caseD+5)!=pionW[i]||(caseD+5)!=kingW[i])){
		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPG==true){
		a=2;}
	    }
	    else if(equipe=='W' &&((caseD+5)==pionB[i]||(caseD+5)==kingB[i])&&((caseD+5)!=pionB[i]||(caseD+5)!=kingB[i])){
		VerifPG = VerifPionGrand(pionW, pionB, kingW, kingB,(caseD+5), equipe);
		if(VerifPG==true){
		a=2;}
	    }
  	    }
    }*/


	return a;
}
