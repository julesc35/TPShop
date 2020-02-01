#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int choix;
int argent = 30;

//initialisation de la liste d'objets achetable

typedef struct Achetable achetable;
struct Achetable{
	int numero;
	char NomItem[500];
	int PrixItem;
};

// initialisation de l'inventaire du joueur

typedef struct Inventaire inventaire;
struct Inventaire{
	int numero;
	char Nom[500];
	int Prix;
};



int main(void){

achetable item[20](int numero, char NomItem,int PrixItem);
item[0]=(1,"Epée",100);
item[1]=(2,"Armure",250);
item[2]=(3,"Os",5);
item[3]=(4,"Biere",2);
item[4]=(5,"entre-cote",10);
item[5]=(6,"épée",100);
item[6]=(6,"épée",100);

inventaire Listeinventaire[20] (int Numero, char Nom,int Prix);
Listeinventaire[0](1,"Tasse",2);
Listeinventaire[1](2,"Epee Rouillee",15);
Listeinventaire[2](3,"Armure Abimee",50);
Listeinventaire[3](4,"Arc",20);
Listeinventaire[4](5,"Viande Avariee",2);
Listeinventaire[5](6,"Pierre Precieuse",500);

printf("vous avez %d pieces d'Or\n", argent);
printf("\n");
printf("bonjour voyageur !\n");
printf("que souhaitez-vous faire ?\nAcheter: 1 Vendre: 2 Regarder l'inventaire: 3\n");
scanf("%d\n", choix);

 if (choix == 1){
	printf("que voiulez-vous acheter ?\n");
	printf("%d""%s""%d\n",item);
	scanf("%d", item.numero);
return choix;
}

if (choix == 2){
	printf("que voulez-vous vendre ?\n");
	printf("%d""%s""%d""\n",inventaire);
	scanf("%d", Listeinventaire.numero);
return choix;
}

if (choix == 3){
	printf("voici votre inventaire\n");
	printf("%d""%s""%d""\n", Listeinventaire);
	return choix;
}

return 0;} 