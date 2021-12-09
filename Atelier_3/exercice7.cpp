//Exercice 7:
#include<iostream>
#include<cmath>
using namespace std;
class vecteur
 {
	float x;
	float y;
	float z;
	
	public:
	vecteur(float e=0,float f=0,float g=0) : x(e), y(f), z(g) {
	}
	
	void afficher()
  {
      cout<<"  ( "<<x<<" , "<<y<<" , "<<z<<" ) "<<endl;
	}
	vecteur somme( const vecteur & v){
    vecteur S;
		S.x = x + v.x;
		S.y = y + v.y;
		S.z = z + v.z;
		return S;
	}
	float produit_scalaire(const vecteur & v) {
		return x*v.x + y*v.y + z*v.z;
	}
	void coincide(const vecteur & v) {
		if(x == v.x && y == v.y && z == v.z){
		cout<< "les deux vecteurs ont les memes composantes !"<<endl ;
			}else {
	 	cout<< "les deux vecteurs ont des composantes differantes !"<<endl ;
	}}
	float norme() //calcule de la norme 
  {
		return sqrt(pow(x,2) +pow(y,2) + pow(z,2));
	}
	vecteur normax(vecteur v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
	
	vecteur* normax(vecteur * v) {
		if( this->norme() > v->norme())
		    return this;
		    
		return v;
	}
	
	vecteur & normaxR(vecteur &v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
		
	};	
  int main(){
  	
  float a,b,c, a2,b2,c2;	
  	cout<<" VECTEUR 1 : "<<endl; 
    cout<<" entrer la valeur de a  : ";
    cin>>a;  
		cout<<" entrer la valeur de b  : ";
    cin>>b;  
		cout<<" entrer la valeur de c : ";
    cin>>c; 
		 
		cout<<" VECTEUR 2 : "<<endl; 
		cout<<" entrer la valeur de a  : ";
    cin>>a2;  
		cout<<" entrer la valeur de b  : ";
    cin>>b2;  
		cout<<" entrer la valeur de c  : ";
    cin>>c2; 
		
  cout<<endl;	
  vecteur V1(a,b,c);
  cout << "La vecteur V1  : ";
  V1.afficher(); 
  
  vecteur V2(a2,b2,c2);
  cout << "La vecteur V2  : ";
  V2.afficher();
  cout<<endl;
  
 cout << "La somme de deux  vecteurs v1 et v2 est : ";
 (V1.somme(V2)).afficher(); 

 cout << "Le produit scalaire de deux  vecteurs v1 et v2 est : " << V1.produit_scalaire(V2) << endl;
 cout<<endl; 
 
 V1.coincide(V2); cout<<endl;
 
	cout<< "la norme de vecteur V1 : "<<V1.norme()<<endl;
	cout<< "la norme de vecteur V2 : "<<V2.norme()<<endl;
	cout<<endl;
	   
	cout << "la plus grande norme est du vecteur 'par valeur' : ";
	(V1.normax(V2)).afficher();
	cout << "la plus grande norme est du vecteur 'par adresse': ";
	(V1.normax(&V2))->afficher();
	cout << "la plus grande norme est du vecteur 'par reference' :";
	(V1.normaxR(V2)).afficher(); 
	cout<<endl;
	
	return 0;
 }
