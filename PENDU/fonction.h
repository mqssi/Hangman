#include <string>
#include <stdlib.h>
#include <ctime>


#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

int GetNombreAlleatoire();


char GetCaractere();

 std::string ChoisirMot(std::string mots[], int taille);

 void InitEtoile(std::string motCache);

bool TestCaratere(char lettreEntree, std::string& motCache, std::string& hide);
bool TestGagne(std::string motCache, std::string hide);



void color(int couleurDuTexte, int couleurDuFond);
void credits(int choixMenu);
void regles(int choixMenu);


#endif