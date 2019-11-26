#include "cVecteur.h"


////cVecteur::coincide par adresse/////////////////////////////////////////////////////////
//
//BUT : V�rifier si 2 vecteurs coincident.
//
//PRINCIPE : On compare les coordoon�es des deux vecteurs, il elles sont �gales, alors les vecteurs coincident
//
//ENTREE : On a un vecteur en instance, et on ajoute un vecteur en param�tre(celui auquel on veut compar� le vecteur en instance.
//
//SORTIE : Un Booleen 
/////////////////////////////////////////////////////////////////////////////////////
bool cVecteur::coincide(const cVecteur *pcVecteur) const
{
	return (this->f_X == pcVecteur->f_X && this->f_Y == pcVecteur->f_Y && this->f_Z == pcVecteur->f_Z);//passage par adresse Exercice 70 �noc� B
}
