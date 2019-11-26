// Vecteur3d.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <cstdlib>
#include "cVecteur.h"


int main()
{
    std::cout << "Hello World!\n";


	cVecteur vecteur();//Création d'un vecteur avec le constructeur "par défaut"
	cVecteur vecteur2(1,2,3); //Création d'un vecteur avec le deuxième constructeur avec paramètre

	//Système pause
	system("pause");
}