//Exercice 6:
#include <iostream>
using namespace std;
class personne									//Declaration de la classe personne
{
private:
    string nom;
    string prenom;
    int datenaissance;
public:
    personne(string nm,string pm,int ds){		//Creation du constructeur parametre
        nom=nm;
        prenom=pm;
        datenaissance=ds;
    }
    void afficher(){ 								//Fonction pour affichager
        cout<<"le nom du personne est: "<<nom<<" Le prenom est: "<<prenom<<" Date de naissance est: "<<datenaissance<<endl;
    }
};
class employe:public personne{					//Declaration de la sous-class employe
private:
    string nom;
    string prenom;
    int datenaissance;
    float salaire;
public:
    employe(string nm,string pm,int ds,float sl): personne(nm,pm,ds)	// sous-class employe herite de personne.
    {
        nom=nm;
        prenom=pm;
        datenaissance=ds;
        salaire=sl;
    }
    void afficher(){							// Nouvelle fonction afficher pour la sous-class employe.
         cout<<"le nom du employe est: "<<nom<<" Le prenom est: "<<prenom<<" Date de naissance est: "<<datenaissance<<" Son salaire est :"<<salaire <<"DH"<<endl;
    }
};
class chef:public employe{						//Delaration de la sous-class chef
private:
  	string nom;
    string prenom;
    int datenaissance;
    float salaire;
    string service;
public:
    chef(string nm,string pm,int ds,float sl,string sv): employe(nm,pm,ds,sl)
    {
        nom=nm;
        prenom=pm;
        datenaissance=ds;
        salaire=sl;
        service=sv;
    }
    void afficher(){
         cout<<"le nom du chef est: "<<nom<<" Le prenom est: "<<prenom<<" Date de naissance est: "<<datenaissance<<" Son salaire est :"
		 <<salaire <<"DH Son service est: "<<service<<endl;
    }
};
class directeur:public chef{  //	Declaration de la sous-class Directeur
private:
  	string nom;
    string prenom;
    int datenaissance;
    float salaire;
    string service;
    string societe;
public:
    directeur(string nm,string pm,int ds,float sl,string sv,string so): chef(nm,pm,ds,sl,sv)
    {
        nom=nm;
        prenom=pm;
        datenaissance=ds;
        salaire=sl;
        service=sv;
        societe=so;
    }
    void afficher(){
                 cout<<"le nom du directeur est: "<<nom<<" Le prenom est: "<<prenom<<" Date de naissance est: "<<datenaissance<<" Son salaire est :"
				 <<salaire <<"DH Son service est: "<<service<<"Il travai dans: "<<societe<<endl;
    }
};


int main()
{
	
    personne a("Ahmed","kadi",1999);			//Appelle au objets de chaque classe
    a.afficher();
    employe b("imane","jakil",2000,6000);
    b.afficher();
    chef c("jack","rosy",1987,16000,"chef du departement");
    c.afficher();
    directeur d("jaber","elmahjoub",2001,35000,"Directeur general","maroctech");
    d.afficher();

}
