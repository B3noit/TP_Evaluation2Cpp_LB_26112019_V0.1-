#include "cVecteur.h"


////cVecteur::coincide/////////////////////////////////////////////////////////
//
//BUT : Vérifier si 2 vecteurs coincident.
//
//PRINCIPE : On compare les coordoonées des deux vecteurs, il elles sont égales, alors les vecteurs coincident
//
//ENTREE : On a un vecteur en instance, et on ajoute un vecteur en paramètre(celui auquel on veut comparé le vecteur en instance.
//
//SORTIE : Un Booleen 
/////////////////////////////////////////////////////////////////////////////////////
bool cVecteur::coincide(const cVecteur cVecteur) const
{
	return (this->f_X == cVecteur.f_X && this->f_Y == cVecteur.f_Y && this->f_Z == cVecteur.f_Z);
}
