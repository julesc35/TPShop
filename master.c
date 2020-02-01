#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int choix;
int argent = 30;

//initialisation de la liste d'objets achetable

struct Achetable{
	int numero;
	char NomItem;
	int PrixItem;
}

Achetable ListeAchetable [20] 
ListeAchetable[0]{1,"Epée",100"\n"};
ListeAchetable[1]{2,"Armure",250"\n"};
ListeAchetable[2]{3,"Os",5"\n"};
ListeAchetable[3]{4,"Biere",2"\n"};
ListeAchetable[4]{5,"entre-cote",10"\n"};
ListeAchetable[5]{6,"épée",100"\n"};
ListeAchetable[6]{6,"épée",100"\n"};


// initialisation de l'inventaire du joueur

struct Inventaire{
	int numero;
	char Nom;
	int Prix;
}
Inventaire inventaire [20]
inventaire[0]{1,"Tasse",2};
inventaire[1]{2,"Epee Rouillee",15};
inventaire[2]{3,"Armure Abimee",50};
inventaire[3]{4,"Arc",20};
inventaire[4]{5,"Viande Avariee",2};
inventaire[5]{6,"Pierre Precieuse",500};

int main(){

printf("vous avez %d pieces d'Or\n", argent);
printf("\n");
printf("bonjour voyageur !\n");
printf("que souhaitez-vous faire ?\nAcheter: 1 Vendre: 2 Regarder l'inventaire: 3\n");
scanf("%d\n", choix);

 if (choix == 1){
	printf("que voiulez-vous acheter ?\n")
	printf("%d""%s""%d\n",ListeAchetable);
	scanf("%d", ListeAchetable.numero);
return choix;
}

if (choix == 2){
	printf("que voulez-vous vendre ?\n");
	printf("%d""%s""%d""\n", inventaire);
	scand("%d", inventaire.numero);
return choix;
}