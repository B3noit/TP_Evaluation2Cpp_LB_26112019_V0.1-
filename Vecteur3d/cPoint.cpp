#include "cPoint.h"
#include <stdlib.h>
#include <iostream>


int cPoint::nCountPoint = 0;//Initialisation du compteur d'instances de la classe point


//GET

float cPoint::getX(){
	return this->f_X;
}

float cPoint::getY(){
	return this->f_Y;
}


//SET
void cPoint::setX(float f_X){
	this->f_X = f_X;
}


void cPoint::setY(float f_Y)
{
	this->f_Y = f_Y;
}



/////////////////////////////////////////////////////////////////////////////////METHODES





////cPoint::nombre/////////////////////////////////////////////////////////
//
//BUT : Savoir le nombre d'instance de la classe point qui ont été créées.
//
//PRINCIPE : On retourne l'entier de nCountPoint
//
//ENTREE : La classe
//
//SORTIE : L'entier du nmbre d'instance de la classe.
/////////////////////////////////////////////////////////////////////////////////////
int cPoint::nombre(){
	return nCountPoint;
}