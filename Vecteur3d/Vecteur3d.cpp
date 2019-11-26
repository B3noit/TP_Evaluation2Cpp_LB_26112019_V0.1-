// Vecteur3d.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <cstdlib>
#include "cVecteur.h"


int main()
{
    std::cout << "Hello World!\n";


	cVecteur vecteur1(6,6,6);

	cVecteur  vecteur2(1,2,3);

	std::cout << "Les valeurs du vecteur le plus grand sont :" << vecteur2.norMax(&vecteur1)->toString() << std::endl; //passage par adresse + renvoie par adresse
																													//Exercice 71 énoncé C

	//Système pause
	system("pause");
}