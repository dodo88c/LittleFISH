#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "fonction_gestion_partie.h"

int menu_option(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){

    char word2 = 'r';

    printf ("\33[H\33[2J"); //clear console
    printf("\n    +-----------    BIENVENUE sur LitlleFISH   -----------+ " );
    printf("\n    +-----------      une IA tres sympa !!     -----------+ \n \n \n \n \n \n" );

    do{
        printf( "Voici les options Avancees:\n \n" );
        printf( "  - Pour rentrer une configuration de plateau précise, entrez 't' (pour 'tricheur')  \n " );
        printf( "  - Pour sortir du menu, entrez 'e'  \n \n \n" );
        scanf("%c", &word2 );

    }while(word2!= 't' || word2!= 'e');

    if( word2!= 't'){
        return 0;
    }
    if( word2!= 'e'){
        return 1;
    }

}



int lancement(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){      //demande les options de lancement de partie

    char word = 'r';

    printf ("\33[H\33[2J"); //clear console
    printf("\n    +-----------    BIENVENUE sur LitlleFISH   -----------+ " );
    printf("\n    +-----------      une IA tres sympa !!     -----------+ \n \n \n \n \n \n" );

    while(word!= 'b' && word!= 'n' && word!= 'o'){
        word = 'r';
        printf( "Voici les options de lancement:\n \n" );
        printf( "  - Pour jouer une partie avec les Blancs, entrez 'b'  \n" );
        printf( "  - Pour jouer une partie avec les Noirs, entrez 'n'  \n" );
        printf( "  - Pour voir les options supplementaires, entrez 'o'  \n \n \n" );

        scanf("%c", &word );

        printf(" bon choix numero 1 %c \n", word );

    }

    printf(" bon choix numero 2\n" );

    if( word!= 'b'){
        return 0;
    }
    if( word!= 'n'){
        return 1;
    }
    if( word!= 'o'){
        int a= menu_option(pionW, pionB, kingW, kingB);
        if(a==0){
            return 2;
        }
        if(a==1){
            return 3;
        }
    }
}




void demande_coup(int pionW[20], int pionB[20], int kingW[20], int kingB[20],int pion_IA[20], int pion_Joueur[20], int king_IA[20], int king_Joueur[20],char equipe){

        int caseD=0;
        int caseA=0;
        int variableF = 0;

        while( (caseD <=0 || caseD >= 51) || (caseA <=0 && caseA >= 51) || (caseA==caseD) || variableF == 0 ){

                caseD=0;
                caseA=0;

                printf( " Enter le numero de la case de départ  \n \n" );
                scanf("%d", &caseD );

                printf( "  Entrez le numero de la case d'arrivée \n \n" );
                scanf("%d", &caseA );

                variableF = 0;

                for(int i=0;i<20;i++){


                        if(pionW[i]==caseD && equipe=='W'){
                                variableF++;
                        }
                        if(kingW[i]==caseD && equipe=='W'){
                                variableF++;
                        }

                        if(pionB[i]==caseD && equipe=='B'){
                                variableF++;
                        }
                        if(kingB[i]==caseD && equipe=='B'){
                                variableF++;
                        }
                }
                if(variableF==0){
                    printf( "  Case de départ vide \n \n" );
                }
        }


        int action; //0-> rien; 1: manger , 2: deplacer
       bool Var=false;
       int VarA=0;
       Var=verif_delp_joueur(pionW, pionB, kingW, kingB,pion_IA, pion_Joueur, king_IA, king_Joueur,caseD,caseA,action, equipe);
       if(Var==true){
               printf("deplacement valide\n" );

               if(action==1){
                       if(caseD%10<=5){
                           VarA= (caseA+caseD+1)/2;
                       }
                       if(caseD%10>5){
                           VarA= (caseA+caseD-1)/2;
                       }

                   }
               for(int i=0;i<20;i++){


                       if(pionW[i]==caseD){
                               pionW[i]=caseA;
                       }
                       else if(pionB[i]==caseD){
                               pionB[i]=caseA;
                       }
                       else if(kingW[i]==caseD){
                               kingW[i]=caseA;
                       }
                       else if(kingB[i]==caseD){
                               kingB[i]=caseA;
                       }


                       if(pionW[i]==VarA){
                               pionW[i]=0;
                       }
                       else if(pionB[i]==VarA){
                               pionB[i]=0;
                       }
                       else if(kingW[i]==VarA){
                               kingW[i]=0;
                       }
                       else if(kingB[i]==VarA){
                               kingB[i]=0;
                       }

       	        }



       }
       else{
               demande_coup(pionW, pionB, kingW, kingB,pion_IA, pion_Joueur, king_IA, king_Joueur, equipe);
       }


}
