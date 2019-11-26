#pragma once
class cPoint
{
private:

	static int nCountPoint;//Compteur d'instances de point 
	float f_X;
	float f_Y;


public:

	//CONSTRUCTEUR
	inline cPoint(float f_X = 0, float f_Y = 0) {
		this->f_X = f_X;
		this->f_Y = f_Y;
		cPoint::nCountPoint++; //incrémentation du compteur d'instances de la classe cPoint
	}

	//DESTRUCTEUR
	inline ~cPoint() {
		cPoint::nCountPoint--; //décrémentation du compteur d'instances de la classe cPoint
	}


	//GET
	float getX();
	float getY();

	//SET
	void setX(float fltX);
	void setY(float fltY);


	//METHODES

	static int nombre();//Exercice 73
};

