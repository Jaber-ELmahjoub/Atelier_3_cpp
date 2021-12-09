//Exercice4:
#include<iostream>

using namespace std;
	class mother{				// Création de la classe mother
		public:
			void display(){
				cout<<"Hello! i am the mother "<<endl;
			}
	};
	
	class fille : public mother{		// Création du sous-classe Fille
		public:
			void display(){
				cout<<"Bonjour! je suis la fille"<<endl;
			}
	}; 


int main(){
	
	fille h;		 // Création de l'instance fille
	h.display();	//Affichage
	return 0;
}
