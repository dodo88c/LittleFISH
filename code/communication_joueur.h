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
