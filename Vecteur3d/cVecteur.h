#pragma once
class cVecteur
{
private: //Accessible que dans la classe elle m�me
	//Donn�es membres de la classe (coordonn�es du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et � l'ext�rieur de la classe


	//Constructeur avec param�tres initialis� � 0 si non remplis (�noc� b Exercice 69)
	cVecteur(float f_X, float f_Y, float f_Z);
};




