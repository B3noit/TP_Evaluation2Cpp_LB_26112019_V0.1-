#pragma once
class cVecteur
{
private: //Accessible que dans la classe elle m�me
	//Donn�es membres de la classe (coordonn�es du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et � l'ext�rieur de la classe


	//Constructeur inline avec param�tres (�noc� c Exercice 69)
	inline cVecteur(float f_X, float f_Y, float f_Z) {

		this->f_X = f_X;
		this->f_Y = f_Y;
		this->f_Z = f_Z;
	}
};




