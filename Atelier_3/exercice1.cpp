

//Exercice1:
#include <iostream>
using namespace std;

class Myclass {			//CREATION DU CLASS Myclass
	private:
		string name;
	public:
		Myclass();			//CREATION DU CONSTRUCTEUR
		~Myclass();			//CREATION DU DESTRUCTEUR
};


Myclass::Myclass() {		//DEFINITION DU CONSTRUCTEUR
	cout<<"veuillez entrer votre nom: "<<endl;
	cin>>name;
	cout<<"Bonjour "<<name<<endl;
};
Myclass::~Myclass() {	//DEFINITION DU DESTRUCTEUR

	cout<<"Au revoir! "<<name<<endl;
}

int main() {
	Myclass test;		//CREATION D'UN OBJET DU CLASS
	return 0;

}
