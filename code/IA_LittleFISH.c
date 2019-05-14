#include <stdio.h>
#include "regles_verif.h"
#include "interface.h"
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>




int main(){

	int pionW[20]; //initialisation des pions blanc
	int pionB[20]; //noir

	int kingW[20]; //initialisation des reines blanche
	int kingB[20]; //noir


    init(pionW, pionB, kingW, kingB);  // crée le plateau

	affichage(pionW, pionB, kingW, kingB);






}
