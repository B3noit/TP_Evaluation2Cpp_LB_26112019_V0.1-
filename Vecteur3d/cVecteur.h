#pragma once

#include <cmath>
#include <string>
#include <iostream>
class cVecteur
{
private: //Accessible que dans la classe elle m�me
	//Donn�es membres de la classe (coordonn�es du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et � l'ext�rieur de la classe

	//Constructeur "par d�faut"
	cVecteur();

	//Constructeur inline avec param�tres
	inline cVecteur(float f_X, float f_Y, float f_Z) {

		this->f_X = f_X;
		this->f_Y = f_Y;
		this->f_Z = f_Z;
	}

	//GET
	inline float getX() {
		return this->f_X;
	}

	inline float getY() {
		return this->f_Y;
	}

	inline float getZ() {
		return this->f_Z;
	}



	//SET
	inline void setX(const float f_X) {
		this->f_X = f_X;
	}

	inline void setY(const float f_Y) {
		this->f_Y = f_Y;
	}

	inline void setZ(const float f_Z) {

		this->f_Z = f_Z;
	}



	//METHODES
	bool coincide(const cVecteur &cVecteur) const; //passage par r�f�rences Exercice 70 �nonc� C
	float norme() const;
	const cVecteur * norMax(cVecteur * pVecteurCompare) const; //passage par adresse + renvoie par adresse Exercice 71 �nonc� C
	std::string toString() const;
	cVecteur sommeVecteur(cVecteur cVecteurPlus) const;//Exercice 72
	float produitScalaire(cVecteur cVecteurPlus) const;//Exercice 72

};




