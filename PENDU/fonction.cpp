#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "fonction.h"
#include <windows.h>

using namespace std;

int GetNombreAlleatoire() {

	
	srand(time(0));



	return rand() % 10;
}


char GetCaractere()
{
	char lettreEntree;

	cout << "Entrez votre lettre : ";

	
	cin >> lettreEntree;
	return lettreEntree;
}

string ChoisirMot(string mots[], int taille) {
	
	string motCache = mots[GetNombreAlleatoire()];
	
	return motCache;
}

void InitEtoile(string motCache){

	
	// string hide(motCache.size(), '*');

	
}



bool TestCaratere(char lettreEntree, string& motCache, string& hide){
	
	bool win = false;
	
	for(int i = 0; i < hide.size(); i++)
	{	
		if (motCache[i] == lettreEntree) {

			hide[i] = lettreEntree;
			win =  true;
		}
		
	}
	
	return win;
}


bool TestGagne(string motCache, string hide) {
	
	
	
	
	
	motCache.compare(hide);
	if (!hide.compare(motCache)) return 1;
		

	else return 0 ;


}



void color(int couleurDuTexte, int couleurDuFond)
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, couleurDuFond * 16 + couleurDuTexte);


}




void regles(int choixMenu) {

	color(11, 0);

	cout << "Le Pendu est un jeu consistant \x85 trouver un mot en devinant quelles sont les lettres qui le composent." << endl << endl;

	cout << "Le jeu se joue traditionnellement \x85 deux" << endl << endl;



	color(15, 0);

	system("pause");  

	cout << endl;

}


void credits(int choixMenu) {

	color(11, 0);

	cout << "Massi Bouharati" << endl << endl;

	



	color(15, 0);

	system("pause");

	cout << endl;
}