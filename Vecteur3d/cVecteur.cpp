#include "cVecteur.h"


////cVecteur::coincide par références/////////////////////////////////////////////////////////
//
//BUT : Vérifier si 2 vecteurs coincident.
//
//PRINCIPE : On compare les coordoonées des deux vecteurs, il elles sont égales, alors les vecteurs coincident
//
//ENTREE : On a un vecteur en instance, et on ajoute un vecteur en paramètre(celui auquel on veut comparé le vecteur en instance.
//
//SORTIE : Un Booleen 
/////////////////////////////////////////////////////////////////////////////////////
bool cVecteur::coincide(const cVecteur &cVecteur) const
{
	return (this->f_X == cVecteur.f_X && this->f_Y == cVecteur.f_Y && this->f_Z == cVecteur.f_Z);//passage par adresse Exercice 70 énocé B
}


////cVecteur::norm  /////////////////////////////////////////////////////////
//
//BUT : Obtenir la norme d'un vecteur.
//
//PRINCIPE : On calcule la norme du vecteur à l'aide de la formule sqrt(x² + y² + z²).
//
//ENTREE : On a un vecteur en instance.
//
//SORTIE : On retourne un float qui correspond à la norme du vecteur.
/////////////////////////////////////////////////////////////////////////////////////
float cVecteur::norme() const
{
	return sqrtf(f_X * f_X + f_Y * f_Y + f_Z * f_Z);
}


////cVecteur::norMax  /////////////////////////////////////////////////////////
//
//BUT : Compare deux vecteur et savoir lequel dispose de la plus grande norme.
//
//PRINCIPE : On compare la norme des deux vecteurs et on retourne le plus grands.
//
//ENTREE : On a un vecteur en instance et un vecteur qu'on compare en argument.
//
//SORTIE : On retourne un cVecteur qui dispose de la plus grande norme.
/////////////////////////////////////////////////////////////////////////////////////
cVecteur cVecteur::norMax(cVecteur cVecteurCompare) const
{
	if (this->norme() > cVecteurCompare.norme()) {
		return *this;
	}
	else{
		if (this->norme() == cVecteurCompare.norme()){
			return cVecteur(0, 0, 0);
		}
		else{
			return cVecteurCompare;
		}
	}
}


////cVecteur::toString /////////////////////////////////////////////////////////
//
//BUT : Renvoyer les données membres d'un vecteur dans une chaîne.
//
//PRINCIPE : A l'aide de std::toString on récupère les données membres du vecteur en chaîne.
//
//ENTREE : On a un vecteur en instance.
//
//SORTIE : On retourne une chaîne.
/////////////////////////////////////////////////////////////////////////////////////
std::string cVecteur::toString() const
{
	{
		return "CVecteur3d [ x: "

			+ std::to_string(this->f_X) + " ,y: "
			+ std::to_string(this->f_Y) + " ,z: "
			+ std::to_string(this->f_Z) + " ]";
	}
}
