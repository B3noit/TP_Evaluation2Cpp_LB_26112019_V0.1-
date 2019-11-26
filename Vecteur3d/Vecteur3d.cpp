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

	std::cout << "La somme du vecteur1 et vecteur2 est " << vecteur2.sommeVecteur(vecteur1).toString() << std::endl; //Somme de 2 vecteurs
																													//Exercice 72 


	std::cout << "Le produit scalaire du vecteur1 et vecteur2 est " << vecteur2.produitScalaire(vecteur1) << std::endl; //produit scalaire de 2 vecteurs
																													//Exercice 72

	//Système pause
	system("pause");
}