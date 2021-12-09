//Exercice2:
#include <iostream>
using namespace std;

class shape{			//declaratin du classe shape
	public:
		float hauteur;
		float largeur;
	shape(float x,float y){		//declaration du conctructeur shape
		hauteur = x;
		largeur = y;
	}
};
class triangle: public shape{		//declaration du sous-classe triangle de la classe de base shape
	public:
		triangle(float x, float y):shape(x,y){}		
	float area(){ 								//definition de la fonction area 
		return (hauteur*largeur*0.5);
	}
};
class rectangle: public shape{		//declaration du sous-classe rectangle de la classe de base shape
	public:
		rectangle(float x, float y):shape(x,y){}
	float area(){										//definition de la fonction area 
		return (largeur*hauteur);
	}
};

int main(){
	
	triangle triangle(3,5);				// declaration de la varioable
	rectangle rectangle(6,9);			// declaration de la varioable
	cout<<"Air de votre triangle est :"<<triangle.area()<<endl;		//Appel a la fonction
	cout<<"Air de votre rectangle est :"<<rectangle.area()<<endl;	//Appel a la fonction

}
