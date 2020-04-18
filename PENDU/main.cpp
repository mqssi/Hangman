#include <iostream>
#include "fonction.h"



using namespace std;


int main() {

	int choixMenu = 0;
	char choix = 0;
	int const taille = 10;
	string mots[] = { "un","deux","rouge","vert","arbre","bot","test","yes","burger","mot" };
	int const nbCoups = 10;
	char lettreEntree;
	string hide;
	

	
	
	
	cout << "JEU DU PENDU " << " " << endl << endl;
	
	
	
	cout << "Menu :" << endl << endl;
	
	
	

	do
	{

		cout << "1. JOUER " << endl;
		cout << "2. REGLES " << endl;
		cout << "3. CREDITS " << endl;
		cout << "4. QUITTER " << endl;


		cin >> choixMenu;
		cout << endl;

	
	

		if (choixMenu == 1) {
			

			
			do
			{
				
				int essai = 0;
				bool end = false;
				color(15, 0);
				
				string motCache = ChoisirMot(mots, taille);

				cout << " Entrez UNE lettre (Le mot a deviner est " << motCache << " )" << endl;
				color(15, 0);
				string hide(motCache.size(), '*');
				


				do {
					color(10, 0);
					cout << "Il vous reste " << nbCoups - essai << " essais " << endl;
					color(15, 0);
					lettreEntree = GetCaractere();
					color(15, 0);
					
					
					if (TestCaratere(lettreEntree, motCache, hide))
					{
						
						color(10, 0);
						cout << "la lettre est dans le mot"<<endl;
						color(15, 0);

						if (TestGagne(motCache, hide))
						{
							color(14, 0);
							cout << "VOUS AVEZ GAGNE!!" << endl;
							end = true;
							break;
						}
					}
					else
					{
						color(12, 0);
						cout << "lettre non presente" << endl;
						color(15, 0);
						essai++;
					}
					
					cout << hide << endl;



						color(15, 0);
				
					

				} while (end == false && essai < nbCoups);
				if (end == false) {

					color(14, 0);
					cout << "il vous reste 0 essai " << endl << endl;

					cout << "D\x82sol\x82 vous avez perdu ! Le mot \x82tait :  ";
					cout << motCache << endl;
					cout << endl << endl;
					
				}




				color(15, 0);
				cout << "Voulez-vous rejouer ? (o / n)" << endl;
				cin >> choix;

			} while (choix == 'o');

			break;

		}

		if (choixMenu == 2) {

			regles(choixMenu);


		}
		if (choixMenu == 3) {
			credits(choixMenu);

		}





	} while (choixMenu != 4);
	
	
	
	color(14, 0);
	cout << "Aurevoir!";
	color(15, 0);
	
	return 0;
}


	