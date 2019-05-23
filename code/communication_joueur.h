#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int lancement(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){      //demande les options de lancement de partie

    char word = 'r';

    printf ("\33[H\33[2J"); //clear console
    printf("\n    +-----------    BIENVENUE sur LitlleFISH   -----------+ " );
    printf("\n    +-----------      une IA tres sympa !!     -----------+ \n \n \n \n \n \n" );

    do{
        printf( "Voici les options de lancement:\n \n" );
        printf( "  - Pour jouer une partie avec les Blancs, entrez 'b'  \n" );
        printf( "  - Pour jouer une partie avec les Noirs, entrez 'n'  \n" );
        printf( "  - Pour voir les options supplementaires, entrez 'o'  \n \n \n" );
        scanf("%c \n", word );

    }while(word!= 'b' || word!= 'n' || word!= 'o');

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


int menu_option(int pionW[20], int pionB[20], int kingW[20], int kingB[20]){

    char word2 = 'r';

    printf ("\33[H\33[2J"); //clear console
    printf("\n    +-----------    BIENVENUE sur LitlleFISH   -----------+ " );
    printf("\n    +-----------      une IA tres sympa !!     -----------+ \n \n \n \n \n \n" );

    do{
        printf( "Voici les options Avancees:\n \n" );
        printf( "  - Pour rentrer une configuration de plateau précise, entrez 't' (pour 'tricheur')  \n " );
        printf( "  - Pour sortir du menu, entrez 'e'  \n \n \n" );
        scanf("%c \n", word2 );

    }while(word2!= 't' || word2!= 'e');

    if( word2!= 't'){
        return 0;
    }
    if( word2!= 'e'){
        return 1;
    }

}


void demande_coup(int pionW[20], int pionB[20], int kingW[20], int kingB[20],int pion_IA[20], int pion_Joueur[20], int king_IA[20], int king_Joueur[20]){

        do {
                intf( " Enter le numero de la case de départ  \n \n" );
                scanf("%c \d", caseD );
                printf( "  Entrez le numero de la case d'arrivée \n \n" );
                scanf("%c \d", caseA );

        } while( (caseD >=1 && caseD <= 50) && (caseA >=1 && caseA <= 50) && (caseA!=caseD));


        int action; //0-> rien; 1: manger , 2: deplacer
       bool var=false;
       int VarA=0;
       verif_delp_joueur(pionW, pionB, kingW, kingB,pion_IA, pion_Joueur, king_IA, king_Joueur,caseD,caseA,action);
       if(var==true){
               printf("deplacement valide\n" );

               if(action==1){
                       if(caseD%10<=5){
                           VarA= (caseA+caseD+1)/2;
                       }
                       if(caseD[i]%10>5){
                           VarA= (caseA+caseD-1)/2;
                       }

               }
               for(int i=1;i<21;i++){


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


                       if(pionW[i]==varA){
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
               demande_coup(pionW, pionB, kingW, kingB,pion_IA, pion_Joueur, king_IA, king_Joueur);
       }


}
