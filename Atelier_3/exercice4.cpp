//Exercice4:
#include<iostream>

using namespace std;
	class mother{				// Cr�ation de la classe mother
		public:
			void display(){
				cout<<"Hello! i am the mother "<<endl;
			}
	};
	
	class fille : public mother{		// Cr�ation du sous-classe Fille
		public:
			void display(){
				cout<<"Bonjour! je suis la fille"<<endl;
			}
	}; 


int main(){
	
	fille h;		 // Cr�ation de l'instance fille
	h.display();	//Affichage
	return 0;
}
