#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>






void savegame(int pionW[20], int pionB[20],int kingW[20], int kingB[20] , int tour){     // ecrit une ligne dans le ficier

        FILE* fichier = NULL;

        fichier = fopen("dossier/savegame.txt", "a+");  // option a: ajoute des lignes à la fin


       long ftell(FILE* pointeurSurFichier); //Elle renvoie la position actuelle du curseur sous la forme d'un long:





       fprintf(fichier, "%d              %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d           %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d             %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", tour,
       pionW[0], pionW[1], pionW[2], pionW[3], pionW[4], pionW[5], pionW[6], pionW[7], pionW[8], pionW[9], pionW[10], pionW[11], pionW[12], pionW[13], pionW[14],  pionW[15], pionW[16], pionW[17], pionW[18], pionW[19],
        pionB[0], pionB[1], pionB[2], pionB[3], pionB[4], pionB[5], pionB[6], pionB[7], pionB[8], pionB[9], pionB[10], pionB[11], pionB[12], pionB[13], pionB[14], pionB[15], pionB[16], pionB[17], pionB[18], pionB[19],
         kingW[0], kingW[1], kingW[2], kingW[3], kingW[4], kingW[5], kingW[6], kingW[7], kingW[8], kingW[9], kingW[10], kingW[11], kingW[12], kingW[13], kingW[14], kingW[15], kingW[16], kingW[17], kingW[18], kingW[19],
          kingB[0], kingB[1], kingB[2], kingB[3], kingB[4], kingB[5], kingB[6], kingB[7], kingB[8], kingB[9], kingB[10], kingB[11], kingB[12], kingB[13], kingB[14], kingB[15], kingB[16],  kingB[17],  kingB[18],  kingB[19] );





}


bool  petit_ou_grand(int pionW[20], int pionB[20],int kingW[20], int kingB[20], int caseD, int caseA, char equipe){ //retourne true si SD evsr A est petit; False si grand

    if(equipe=='B'){
        if(caseD%10<=5){
            if( (caseD+5)== caseA){
                return true;
            }
        }
        else if(caseD%10>5){
            if((caseD+4)==caseA){
                return true;
            }
        }
        else{
            return false;
        }
    }
    if(equipe=='W'){

        if(caseD%10<=5){
            if((caseD-5)==caseA){
                return true;
            }
        }
        else if(caseD%10>5){
            if((caseD-6)==caseA){
                return true;
            }
        }
        else{
            return false;
        }
    }
}

bool verif_delp_joueur(int pionW[20], int pionB[20], int kingW[20], int kingB[20],int pion_IA[20], int pion_Joueur[20], int king_IA[20], int king_Joueur[20] , int caseD, int caseA, int action,char equipe){

        int nb_possible_manger=0;
        int tab_possible_de_manger[20][2];
        int deplacement_a_faire[20][2];
        int variableA=0;
        int variableB=0;
        int variableC=0;


        for(int i=0; i<20; i++){            // attribue des poids pour les déplacements des pions joueurs

            if(pion_Joueur[i]==0){
                i++;
            } //saute le pion si =0
            else{

                variableA = pion_Joueur[i];
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
                         printf(" ERREUR verif depl jouer 1\n" );
                    }
                    else{

                        nb_possible_manger++;
                        deplacement_a_faire[i][1]= pion_Joueur[i];
                        deplacement_a_faire[i][2]= variableC;

                    }
                }
                if(variableB == 2){

                    int variableC= deplacement_apres_manger_grand(pionW, pionB, kingW, kingB, variableA, variableC, equipe );
                    if(variableC == 0){
                        printf(" ERREUR verif depl jouer 2 \n" );
                    }
                    else{

                        nb_possible_manger++;
                        deplacement_a_faire[i][1]= pion_Joueur[i];
                        deplacement_a_faire[i][2]= variableC;
                    }
                }
                if(variableB == 0){
                        deplacement_a_faire[i][1]= 0;
                        deplacement_a_faire[i][2]= 0;
                }
            }

        }

        action = 0;

        if(nb_possible_manger>=1){

               for(int i=0; i<20; i++){
                       if(deplacement_a_faire[i][1]==caseD && deplacement_a_faire[i][2]==caseA){
                               printf(" vous mangez un pion\n" );
                               action=1;
                               return true;
               }
               else{

                       printf(" il est possible de manger un pion, vous devez le faire\n" );
                       return false;
               }
           }
       }
        else{

            bool variableE = false;
            variableE = petit_ou_grand(pionW, pionB, kingW, kingB, caseD, caseA, equipe);

                 if(VerifPionPetit(pionW, pionB, kingW, kingB, caseD, equipe )==true  && variableE == true){
                        printf(" vous deplacez un pion sur petit\n" );
                        action=2;
                        return true;
                }
                else if(VerifPionGrand(pionW, pionB, kingW, kingB, caseD, equipe )==true  && variableE == false){
                        printf(" vous deplacez un pion sur grand \n" );
                        action=2;
                        return true;
                }
                else{
                        printf(" il n'est pas possible de faire ce mouvement\n" );
                        return false;
                }
        }
}
