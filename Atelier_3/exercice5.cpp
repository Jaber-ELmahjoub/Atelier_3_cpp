//Exercice5:
#include <iostream>
#include <string>
using namespace std;
class Animal		//declaration de la classe animal
{
	protected:
	 int age;
	 string name;
	 string origin;
	public:
	 void set_value (int x, string y, string z)
	{	age = x;
		name = y;
		origin=z; }
};
class Dolphin: public Animal		// declaration de Dolphin classe herite de Animal
{
public:
void display2()
{
cout<< "Je m appelle "<< name<< " ,je suis un zebre de "<<age << " ans et je suis d origine de "<< origin;}
};

class Zebra:public Animal{			// declaration de Zebra classe herite de Animal
public:
void display1()						// affichage des informations du zebra
{
cout<<"Je m appelle "<<name<<" ,je suis un Dolphin de "<< age << " ans et je suis d origine de "<< origin<<endl;}
};
int main ()
{	
	Zebra zebra;				//creation des objets
	Dolphin dolphin;		
	string x1="lili";
	string x2="toto";
	string o1="Kenya";
	string o2="Ocean atlantic";
	zebra.set_value (13,x1,o1);		//Appelle de la fonction set_value
	dolphin.set_value (2,x2,o2);
	zebra.display1() ;
	dolphin.display2() ;
	return 0;
}
