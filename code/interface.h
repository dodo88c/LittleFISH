#include <stdio.h>
#include <stdlib.h>

void affichage(int pionW[20], int pionB[20], int kingW[20], int kingB[20], char equipe){
	int carreau,place;
	char grille[50];

	printf("i: pionW[i]|pionB[i]|kingW[i]|kingB[i]\n" );
	for(int i=0; i<21; i++){
	printf("%i:  %i | %i | %i | %i\n", i , pionW[i], pionB[i], kingW[i], kingB[i]);}

	for(carreau=1;carreau<51;carreau++){

            grille[carreau]=' '; //case vide
            		for(place=0;place<20;place++){



                    		if(carreau==pionB[place]){
                    			 grille[carreau]='B'; //pion noir sur la case
                    		}
                    		if(carreau==pionW[place]){

                    			grille[carreau]='W'; //pion blanc sur la case
                    		}
                    		if(carreau==kingB[place]){
                    			grille[carreau]='N'; //reine noire sur la case
                    		}
                    		if(carreau==kingW[place]){

                    			grille[carreau]='D'; //reine blanche sur la case
                    		}



            		}
	}

	if(equipe == 'A'){

			printf("+-------+-------+-------+-------+ IA LittleFISH +-------+-------+-------+-------+ \n");
			printf("\n  \n" );
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |1      |       |2      |       |3      |       |4      |       |5      | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[1],grille[2],grille[3],grille[4],grille[5]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|6      |       |7      |       |8      |       |9      |       |10     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[6],grille[7],grille[8],grille[9],grille[10]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |11     |       |12     |       |13     |       |14     |       |15     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[11],grille[12],grille[13],grille[14],grille[15]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|16     |       |17     |       |18     |       |19     |       |20     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[16],grille[17],grille[18],grille[19],grille[20]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |21     |       |22     |       |23     |       |24     |       |25     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[21],grille[22],grille[23],grille[24],grille[25]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|26     |       |27     |       |28     |       |29     |       |30     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[26],grille[27],grille[28],grille[29],grille[30]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |31     |       |32     |       |33     |       |34     |       |35     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[31],grille[32],grille[33],grille[34],grille[35]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|36     |       |37     |       |38     |       |39     |       |40     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[36],grille[37],grille[38],grille[39],grille[40]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |41     |       |42     |       |43     |       |44     |       |45     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[41],grille[42],grille[43],grille[44],grille[45]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|46     |       |47     |       |48     |       |49     |       |50     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[46],grille[47],grille[48],grille[49],grille[50]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("\n  \n" );
			printf("+-------+-------+-------+-------+ Joueur Humain +-------+-------+-------+-------+ \n");

	}

	if(equipe == 'B'){
			printf("+-------+-------+-------+-------+ IA LittleFISH +-------+-------+-------+-------+ \n");
			printf("\n  \n" );
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |50     |       |49     |       |48     |       |47     |       |46     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[50],grille[49],grille[48],grille[47],grille[46]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|45     |       |44     |       |43     |       |42     |       |41     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[45],grille[44],grille[43],grille[42],grille[41]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |40     |       |39     |       |38     |       |37     |       |36     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[40],grille[39],grille[38],grille[37],grille[36]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|35     |       |34     |       |33     |       |32     |       |31     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[35],grille[34],grille[33],grille[32],grille[31]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |30     |       |29     |       |28     |       |27     |       |26     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[30],grille[29],grille[28],grille[27],grille[26]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|25     |       |24     |       |23     |       |22     |       |21     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[25],grille[24],grille[23],grille[22],grille[21]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |20     |       |19     |       |18     |       |17     |       |16     | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[20],grille[19],grille[18],grille[17],grille[16]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|15     |       |14     |       |13     |       |12     |       |11     |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[15],grille[14],grille[13],grille[12],grille[11]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|       |10     |       |9      |       |8      |       |7      |       |6      | \n");
			printf("|       |   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   | \n",grille[10],grille[9],grille[8],grille[7],grille[6]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("|5      |       |4      |       |3      |       |2      |       |1      |       | \n");
			printf("|   %c   |       |   %c   |       |   %c   |       |   %c   |       |   %c   |       | \n",grille[5],grille[4],grille[3],grille[2],grille[1]);
			printf("|       |       |       |       |       |       |       |       |       |       | \n");
			printf("+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+ \n");
			printf("\n  \n" );
			printf("+-------+-------+-------+-------+ Joueur Humain +-------+-------+-------+-------+ \n");
	}


}
