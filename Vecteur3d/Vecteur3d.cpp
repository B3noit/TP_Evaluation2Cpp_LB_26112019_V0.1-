// Vecteur3d.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <cstdlib>
#include "cPoint.h"


int main()
{
    std::cout << "Je créé un point,\n";	//Exercice 73
	cPoint *point1 = new cPoint();
	std::cout << "Nombre d'instances de la classe cPoint qui existent : " << cPoint::nombre() << std::endl;

	std::cout << "Je créé un point,\n";	//Exercice 73
	cPoint *point2 = new cPoint();
	std::cout << "Nombre d'instances de la classe cPoint qui existent : " << cPoint::nombre() << std::endl;

	std::cout << "Je détruis un point,\n";	//Exercice 73
	delete point1;
	std::cout << "Nombre d'instances de la classe cPoint qui existent : " << cPoint::nombre() << std::endl;

	std::cout << "Je détruis encore un point,\n";	//Exercice 73
	delete point2;
	std::cout << "Nombre d'instances de la classe cPoint qui existent : " << cPoint::nombre() << std::endl;
	//Système pause;
	system("pause");
}