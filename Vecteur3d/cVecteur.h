#pragma once
class cVecteur
{
private: //Accessible que dans la classe elle même
	//Données membres de la classe (coordonnées du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et à l'extérieur de la classe


	//Constructeur inline avec paramètres (énocé c Exercice 69)
	inline cVecteur(float f_X, float f_Y, float f_Z) {

		this->f_X = f_X;
		this->f_Y = f_Y;
		this->f_Z = f_Z;
	}
};




