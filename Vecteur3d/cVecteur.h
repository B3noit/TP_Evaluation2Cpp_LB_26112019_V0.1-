#pragma once

#include <cmath>
#include <string>
#include <iostream>
class cVecteur
{
private: //Accessible que dans la classe elle même
	//Données membres de la classe (coordonnées du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et à l'extérieur de la classe


	//Constructeur inline avec paramètres
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
	bool coincide(const cVecteur &cVecteur) const; //passage par références Exercice 70 énoncé C
	float norme() const;
	cVecteur norMax(cVecteur cVecteurCompare) const; //passage par valeur Exercice 71 énoncé A
	std::string toString() const;
};




