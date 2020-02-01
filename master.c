#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int choix;
int argent = 30;

//initialisation de la liste d'objets achetable

struct Achetable{
	char NomItem;
	int PrixItem;
}

Achetable ListeAchetable [20] 
ListeAchetable[0]{"Epée",100"\n"};
ListeAchetable[1]{"Armure",250"\n"};
ListeAchetable[2]{"Os",5"\n"};
ListeAchetable[3]{"Biere",2"\n"};
ListeAchetable[4]{"entre-cote",10"\n"};
ListeAchetable[5]{"épée",100"\n"};
ListeAchetable[6]{"épée",100"\n"};

int main(){

printf("vous avez %d pieces d'Or\n", argent);
printf("\n");
printf("bonjour voyageur !\n");
printf("que souhaitez-vous faire ?\nAcheter: 1 Vendre: 2 Regarder l'inventaire: 3\n");
scanf("%d\n", choix);
 if (choix == 1)


	return choix;
}
