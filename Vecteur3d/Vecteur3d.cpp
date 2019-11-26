// Vecteur3d.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <cstdlib>
#include "cVecteur.h"


int main()
{
    std::cout << "Hello World!\n";


	cVecteur vecteur1(1,2,3);

	cVecteur vecteur2(1,2,3);

	std::cout << "Les deux vecteurs coincident-ils 1 pour oui, 0 pour non : " << vecteur1.coincide(vecteur2) << "\n";//Par références
																														//Exercice 70 énoncé B





	//Système pause
	system("pause");
}