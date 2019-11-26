#include "cVecteur.h"


//CONSTRUCTEUR PAR DEFAUT
cVecteur::cVecteur() {
	this->f_X = 0;
	this->f_Y = 0;
	this->f_Z= 0;
}

////cVecteur::coincide par r�f�rences/////////////////////////////////////////////////////////
//
//BUT : V�rifier si 2 vecteurs coincident.
//
//PRINCIPE : On compare les coordoon�es des deux vecteurs, il elles sont �gales, alors les vecteurs coincident
//
//ENTREE : On a un vecteur en instance, et on ajoute un vecteur en param�tre(celui auquel on veut compar� le vecteur en instance.
//
//SORTIE : Un Booleen 
/////////////////////////////////////////////////////////////////////////////////////
bool cVecteur::coincide(const cVecteur &cVecteur) const
{
	return (this->f_X == cVecteur.f_X && this->f_Y == cVecteur.f_Y && this->f_Z == cVecteur.f_Z);//passage par adresse Exercice 70 �noc� B
}


////cVecteur::norm  /////////////////////////////////////////////////////////
//
//BUT : Obtenir la norme d'un vecteur.
//
//PRINCIPE : On calcule la norme du vecteur � l'aide de la formule sqrt(x� + y� + z�).
//
//ENTREE : On a un vecteur en instance.
//
//SORTIE : On retourne un float qui correspond � la norme du vecteur.
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
const cVecteur * cVecteur::norMax(cVecteur * pVecteurCompare) const
{
	if (this->norme() > pVecteurCompare->norme()) {
		return this;
	}
	else{
		if (this->norme() == pVecteurCompare->norme()){
			return this;
		}
		else{
			return pVecteurCompare;
		}
	}
}


////cVecteur::toString /////////////////////////////////////////////////////////
//
//BUT : Renvoyer les donn�es membres d'un vecteur dans une cha�ne.
//
//PRINCIPE : A l'aide de std::toString on r�cup�re les donn�es membres du vecteur en cha�ne.
//
//ENTREE : On a un vecteur en instance.
//
//SORTIE : On retourne une cha�ne.
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


////cVecteur::sommeVecteur/////////////////////////////////////////////////////////
//
//BUT : Renvoyer la somme de deux vecteurs
//
//PRINCIPE : On additionnes les donn�es membres corespondantes entre-elles et on retourne le vecteur qui en r�sulte.
//
//ENTREE : On a un vecteur en instance et un vecteur qu'on additonne en argument.
//
//SORTIE : On retourne un vecteur qui est la somme des deux vcteurs d'ENTREE.
/////////////////////////////////////////////////////////////////////////////////////
cVecteur cVecteur::sommeVecteur(cVecteur cVecteurPlus) const {

	return cVecteur(this->f_X + cVecteurPlus.f_X, this->f_Y + cVecteurPlus.f_Y, this->f_Z + cVecteurPlus.f_Z);

}


////cVecteur::produitScalaire/////////////////////////////////////////////////////////
//
//BUT : Renvoyer le produit scalaire de deux vecteurs
//
//PRINCIPE : On calcule le produit scalaire � l'aide de la formule : VecteurA(x1, y1, y2) et VecteurB(x2, y2, z2) =  x1*x2 + y1*y2 + z1*z2
//
//ENTREE : On a un vecteur en instance et un vecteur en argument.
//
//SORTIE : On retourne un float qui correspond au produit scalaire des deux vcteurs d'ENTREE.
/////////////////////////////////////////////////////////////////////////////////////
float cVecteur::produitScalaire(cVecteur cVecteurPlus) const
{
	return this->f_X * cVecteurPlus.f_X + this->f_Y * cVecteurPlus.f_Y + this->f_Z * cVecteurPlus.f_Z;
}
