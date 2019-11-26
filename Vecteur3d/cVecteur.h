#pragma once
class cVecteur
{
private: //Accessible que dans la classe elle même
	//Données membres de la classe (coordonnées du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et à l'extérieur de la classe


	//Constructeur "par défaut" sans paramètres
	cVecteur();

	//Constructeur avec paramètres
	cVecteur(float f_X, float f_Y, float f_Z);
};





