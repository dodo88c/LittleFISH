#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>





// ICI on determine le meilleur coup à jouer
// On rentre une configuration, et l'equipe qui doit jouer
// Il en ressort la configuration de plateau du tour suivant




int deplacement_apres_manger_petit(int pionW[20], int pionB[20], int kingW[20], int kingB[20], int caseD, int caseAA, char Joueur){ // retourne la case d'arrivé du pion
    int a=0;
    int caseA=0;
    caseAA=0;

    if(Joueur=='W'){
        if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==1||caseD==2||caseD==3||caseD==4||caseD==5){
            a=4; // 4 = ERREUR
            printf(" LA CASES OU se trouve le pion avctuel EST au bord DU PLATEAU\n");
        }


        if(a==0){
            for(int i=0;i<20;i++){
                if(caseD%10<=5){
                if(caseD-5==pionW[i] || caseD-5==pionB[i]||caseD-5==kingW[i] || caseD-5==kingB[i]){
                    a=1; //case ocupée
                    caseA = caseD-5;
                }
                }
                if(caseD%10>5){
                if(caseD-6==pionW[i] || caseD-6==pionB[i]||caseD-6==kingW[i] || caseD-6==kingB[i]){
                    a=1; //case ocupée
                    caseA = caseD-6;
                }
                }
            }
        }
    }

    if(Joueur=='B'){
        if (caseD==6||caseD==16||caseD==26||caseD==36||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
            a=4;
        }
        if(a==0){
            for(int i=0;i<20;i++){
                if(caseD%10<=5){
                if(caseD+5==pionW[i] || caseD+5==pionB[i]||caseD+5==kingW[i] || caseD+5==kingB[i]){
                    a=2; //case ocupée
                    caseA = caseD+5;
                }
                }
                if(caseD%10>5){
                if(caseD+4==pionW[i] || caseD+4==pionB[i]||caseD+4==kingW[i] || caseD+4==kingB[i]){
                    a=2; //case ocupée
                    caseA = caseD+4;
                }
                }
            }
        }

    }
    printf("possible de manger petit  case %i\n",a );

    if(a==1){   //determine la case apres le pion a manger


            if (caseA==6||caseA==16||caseA==26||caseA==36||caseA==46||caseA==1||caseA==2||caseA==3||caseA==4||caseA==5){
                a=5; // 5 = ERREUR apres manger_pion
                printf(" LA CASES APRES LE MANGER DE PION EST EN DEHORS DU PLATEAU\n");
            }


            if(a==1){
                for(int i=0;i<20;i++){
                    if(caseA%10<=5){
                    if(caseA-5==pionW[i] || caseA-5==pionB[i]||caseA-5==kingW[i] || caseA-5==kingB[i]){
                        a=7; //case ocupée

                    }
                    else{
                        caseAA = caseA-5;
                    }
                    }
                    if(caseA%10>5){
                    if(caseA-6==pionW[i] || caseA-6==pionB[i]||caseA-6==kingW[i] || caseA-6==kingB[i]){
                        a=7; //case ocupée

                    }
                    else{
                        caseAA = caseA-6;
                    }
                    }

                }
            }

    }

    if(a==2){

            if (caseA==6||caseA==16||caseA==26||caseA==36||caseA==46||caseA==47||caseA==48||caseA==49||caseA==50){
                a=5;
                printf(" LA CASES APRES LE MANGER DE PION EST EN DEHORS DU PLATEAU\n");
            }
            if(a==2){
                for(int i=0;i<20;i++){
                    if(caseA%10<=5){
                    if(caseA+5==pionW[i] || caseA+5==pionB[i]||caseA+5==kingW[i] || caseA+5==kingB[i]){
                        a=2; //case ocupée
                    }
                    else{
                        caseAA = caseA+5;
                    }
                    }
                    if(caseA%10>5){
                    if(caseA+4==pionW[i] || caseA+4==pionB[i]||caseA+4==kingW[i] || caseA+4==kingB[i]){
                        a=2; //case ocupée
                    }
                    else{
                        caseAA = caseA+4;
                    }
                    }
                }
            }
    }


return caseAA;

}



int deplacement_apres_manger_grand(int pionW[20], int pionB[20], int kingW[20], int kingB[20], int caseD, int caseAA, char Joueur){ // retourne la case d'arrivé du pion
    int a=0;
    int caseA=0;
    caseAA=0;

    if(Joueur=='B'){
        if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
            a=4; // 4 = ERREUR
            printf(" LA CASES OU se trouve le pion avctuel EST au bord DU PLATEAU\n");
        }


        if(a==0){
            for(int i=0;i<20;i++){
                if(caseD%10<=5){
                if(caseD+6==pionW[i] || caseD+6==pionB[i]||caseD+6==kingW[i] || caseD+6==kingB[i]){
                    a=1; //case ocupée
                    caseA = caseD+6;
                }
                }
                if(caseD%10>5){
                if(caseD+5==pionW[i] || caseD+5==pionB[i]||caseD+5==kingW[i] || caseD+5==kingB[i]){
                    a=1; //case ocupée
                    caseA = caseD+5;
                }
                }
            }
        }
    }
    if(Joueur=='W'){
        if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==1||caseD==2||caseD==3||caseD==4||caseD==5){
            a=4;
        }
        if(a==0){
            for(int i=0;i<20;i++){
                if(caseD%10<=5){
                if(caseD-4==pionW[i] || caseD-4==pionB[i]||caseD-4==kingW[i] || caseD-4==kingB[i]){
                    a=2; //case ocupée
                    caseA = caseD-4;
                }
                }
                if(caseD%10>5){
                if(caseD-5==pionW[i] || caseD-5==pionB[i]||caseD-5==kingW[i] || caseD-5==kingB[i]){
                    a=2; //case ocupée
                    caseA = caseD-5;
                }
                }
            }
        }

    }

    if(a==1){   //determine la case apres le pion a manger


            if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==46||caseD==47||caseD==48||caseD==49||caseD==50){
                a=5; // 5 = ERREUR apres manger_pion
                printf(" LA CASES APRES LE MANGER DE PION EST EN DEHORS DU PLATEAU\n");
            }


            if(a==1){
                for(int i=0;i<20;i++){
                    if(caseA%10<=5){
                    if(caseA+6==pionW[i] || caseA+6==pionB[i]||caseA+6==kingW[i] || caseA+6==kingB[i]){
                        a=7; //case ocupée

                    }
                    else{
                        caseAA = caseA+5;
                    }
                    }
                    if(caseA%10>5){
                    if(caseA+5==pionW[i] || caseA+5==pionB[i]||caseA+5==kingW[i] || caseA+5==kingB[i]){
                        a=7; //case ocupée

                    }
                    else{
                        caseAA = caseA+4;
                    }
                    }

                }
            }

    }
    if(a==2){

            if (caseD==5||caseD==15||caseD==25||caseD==35||caseD==45||caseD==1||caseD==2||caseD==3||caseD==4||caseD==5){
                a=5;
                printf(" LA CASES APRES LE MANGER DE PION EST EN DEHORS DU PLATEAU\n");
            }
            if(a==2){
                for(int i=0;i<20;i++){
                    if(caseA%10<=5){
                    if(caseA-4==pionW[i] || caseA-4==pionB[i]||caseA-4==kingW[i] || caseA-4==kingB[i]){
                        a=2; //case ocupée
                    }
                    else{
                        caseAA = caseA-4;
                    }
                    }
                    if(caseA%10>5){
                    if(caseA-5==pionW[i] || caseA-5==pionB[i]||caseA-5==kingW[i] || caseA-5==kingB[i]){
                        a=2; //case ocupée
                    }
                    else{
                        caseAA = caseA-5;
                    }
                    }
                }
            }
    }


    return caseAA;

}




void Joue_un_coup (int pionW[20], int pionB[20], int kingW[20], int kingB[20], char equipe_IA, char equipe){ // fonction principale, revoie les tableaux de pions


    int P_joueur[20] = {0};
    int K_joueur[20] = {0};
    int P_advs[20] = {0};
    int K_advs[20] = {0};

    printf("équipe joueur = %c\n", equipe );

    for(int i=0; i<20; i++){
        if(equipe=='W'){                     // fonction pour jouer les blancs
            P_joueur[i] = pionW[i];
            K_joueur[i] = kingW[i];
            P_advs[i] = pionB[i];
            K_advs[i] = kingB[i];
        }
        if(equipe=='B'){                     // fonction pour jouer les noirs
            P_joueur[i] = pionB[i];
            K_joueur[i] = kingB[i];
            P_advs[i] = pionW[i];
            K_advs[i] = kingW[i];
        }
    }

    printf("i: pionW[i]|pionB[i]|P_joueur[i]|P_advs[i]\n" );
	for(int i=0; i<20; i++){
	printf("%i:  %i | %i | %i | %i\n", i , pionW[i], pionB[i], P_joueur[i], P_advs[i]);}

    int poids_des_routes[40]= {0};       // innitialise un tableau de 40, de 0 a 19, le poids des routes des pions, de 20 a 39 le piods des routes des reines
    int deplacement_a_faire[40][2] = {0};    // innitialise le meme tableau qu'avant, mais avec le deplacement le plsu interessant pour chaque pion/reines

    int variableA=0;
    int variableB=0;
    int variableC=0;
    int pion_mange=0;

    for(int i=0; i<20; i++){            // attribue des poids pour les déplacements des pions joueurs
        printf("iteration i = %d \n",i);

        printf(" P_joueur[i] %d \n", P_joueur[i] );

        if(P_joueur[i]==0){

            printf(" poids_des_routes[i] %d \n", poids_des_routes[i] );
            poids_des_routes[i]=0;
        } //saute le pion si =0
        else{

            if(VerifPionPetit(pionW, pionB, kingW, kingB,P_joueur[i],equipe) == true){
                deplacement_a_faire[i][0]= P_joueur[i];

                if(equipe=='B'){
    				if(P_joueur[i]%10<=5){
                        deplacement_a_faire[i][1]= P_joueur[i]+5;

    				}
    				if(P_joueur[i]%10>5){
                        deplacement_a_faire[i][1]= P_joueur[i]+4;

    				}
            	}
            	if(equipe=='W'){
    				if(P_joueur[i]%10<=5){
                        deplacement_a_faire[i][1]= P_joueur[i]-5;
    				}
    				if(P_joueur[i]%10>5){
                        deplacement_a_faire[i][1]= P_joueur[i]-6;
    				}
            	}

                poids_des_routes[i]=1;
                printf("possible de deplacer petit \n");
            }
            if(VerifPionGrand(pionW, pionB, kingW, kingB,P_joueur[i],equipe) == true){
                deplacement_a_faire[i][0]= P_joueur[i];

                if(equipe=='B'){
    				if(P_joueur[i]%10<=5){
                        deplacement_a_faire[i][1]= P_joueur[i]+6;

    				}
    				if(P_joueur[i]%10>5){
                        deplacement_a_faire[i][1]= P_joueur[i]=5;

    				}
            	}
            	if(equipe=='W'){
    				if(P_joueur[i]%10<=5){
                        deplacement_a_faire[i][1]= P_joueur[i]-4;
    				}
    				if(P_joueur[i]%10>5){
                        deplacement_a_faire[i][1]= P_joueur[i]-5;
    				}
            	}
                poids_des_routes[i]=poids_des_routes[i]+2;
                printf("possible de deplacer grand \n");
            }

            variableA = P_joueur[i];
            variableB = manger_pion(pionW, pionB, kingW, kingB, variableA, equipe );
//a=1: le pion peut manger sur la case la plus petite , a=2: le pion peut manger sur la case la plus grande, a=3:le pion peut sur les deux case
//a=0; rien


            if(variableB == 3){
                srand(time(NULL));
                variableB=rand()%2+1;    //entre 1-2

            }

            if(variableB == 1){
                variableC= deplacement_apres_manger_petit(pionW, pionB, kingW, kingB, variableA, variableC, equipe );
                if(variableC == 0){
                     printf(" ERREUR JOUEUR NON DETERMINISTE LIGNE 338\n" );
                }
                else{

                    poids_des_routes[i]=10;
                    deplacement_a_faire[i][0]= P_joueur[i];
                    deplacement_a_faire[i][1]= variableC;
                    if(equipe=='B'){
        				if(P_joueur[i]%10<=5){
                            pion_mange= P_joueur[i]+5;

        				}
        				if(P_joueur[i]%10>5){
                            pion_mange= P_joueur[i]+4;

        				}
                	}
                	if(equipe=='W'){
        				if(P_joueur[i]%10<=5){
                            pion_mange= P_joueur[i]-5;
        				}
        				if(P_joueur[i]%10>5){
                            pion_mange= P_joueur[i]-6;
        				}
                	}

                }
            }
            if(variableB == 2){

                variableC= deplacement_apres_manger_grand(pionW, pionB, kingW, kingB, variableA, variableC, equipe );
                if(variableC == 0){
                    printf(" ERREUR JOUEUR NON DETERMINISTE LIGNE 352 \n" );
                }
                else{

                    poids_des_routes[i]=15;
                    deplacement_a_faire[i][0]= P_joueur[i];
                    deplacement_a_faire[i][1]= variableC;
                    if(equipe=='B'){
        				if(P_joueur[i]%10<=5){
                            pion_mange= P_joueur[i]+6;

        				}
        				if(P_joueur[i]%10>5){
                            pion_mange= P_joueur[i]=5;

        				}
                	}
                	if(equipe=='W'){
        				if(P_joueur[i]%10<=5){
                            pion_mange= P_joueur[i]-4;
        				}
        				if(P_joueur[i]%10>5){
                            pion_mange= P_joueur[i]-5;
        				}
                	}
                }
            }

        }
    }

    for(int i=20; i<40; i++){            // attribue des poids pour les déplacements des pions joueurs

        int j=i-20;
        if(K_joueur[j]==0){ i++; poids_des_routes[i]=0; } //saute le pion si =0
    }


    int variableD=0;    //plus grand poids
    int variableE=0;    // route avec le plus grand poids

    for(int i=0; i<40; i++){
        printf("route: %d,  poids= %d, pion de depart = %d, pion d'arrivée = %d \n", i, poids_des_routes[i],deplacement_a_faire[i][0],deplacement_a_faire[i][1] );

        if(poids_des_routes[i] >= variableD){
            variableE=i;
            variableD = poids_des_routes[i];
        }
    }
    printf("route avec le plus grand poids= %d\n", variableE );

    if(variableE == 0){  // aucune possibilité de manger
        printf(" debug ALEATOIRE A\n" );

        int nbgen=0;

        do{
            do{
                srand(time(NULL));
                nbgen=rand()%20;
                printf("NBGEN = %d\n", nbgen );
            }while(P_joueur[nbgen]==0);
        }while (VerifPionPetit(pionW, pionB, kingW, kingB, nbgen, equipe ) != false );

        poids_des_routes[nbgen]=2;
        deplacement_a_faire[nbgen][0]= P_joueur[nbgen];
        deplacement_a_faire[nbgen][1]= variableC;
    }


    if(variableE<20){
        P_joueur[variableE] = deplacement_a_faire[variableE][1];
        printf("pjoueur modifié \n");
        if(variableD>5){
            printf("un pion advs va disparaitre \n");
            for(int i=0; i<40; i++){
                if(P_advs[i]==pion_mange){
                    P_advs[i]=0;
                }
                }
        }

    }
    else{
        K_joueur[variableE] = deplacement_a_faire[variableE][1];
        printf("K joueur modifié \n");

    }


    printf("\n\n poid de la route = %d \n \n", variableD );
    printf("pion de depart = %d \n", deplacement_a_faire[variableE][0]);
    printf("pion d'arrivée = %d \n \n", deplacement_a_faire[variableE][1]);


    for(int i=0; i<20; i++){
        if(equipe=='W'){                     // fonction pour jouer les blancs
            pionW[i] = P_joueur[i];
            kingW[i] = K_joueur[i];
            pionB[i] = P_advs[i];
            kingB[i] = K_advs[i];
        }
        if(equipe=='B'){                     // fonction pour jouer les noirs
            pionB[i] = P_joueur[i];
            kingB[i] = K_joueur[i];
            pionW[i] = P_advs[i];
            kingW[i] = K_advs[i];
        }
    }
}
