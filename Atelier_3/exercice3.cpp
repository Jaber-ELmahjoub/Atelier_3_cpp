 //Exerecice3: 
 #include<iostream>
 using namespace std;
 
 class complexe{				// declaration du class complexe
 	
 	public:
 	int img;
 	int rel;
 	
 	public:
 		complexe();					// constructeur par default
 		complexe(int x,int y){		//constructeur parametre
 			this->rel=x;
 			this->img=y;
		 }
 		complexe(const complexe&); 			//consctructeur par copie.
 			
 		void afficher(){
 			cout<<"La somme du deux nombres complexes est: ";
 			cout<<rel<<"+ i"<<img<<endl;
		 }  
 		friend complexe sum(const complexe& ,const complexe&);		//Fonction amie 
 };
 complexe sum(const complexe& z1,const complexe& z2)
 {
 	complexe i(z1.rel+z2.rel,z1.img+z2.img);					// defenition de l oprerateur addition
 	return i;
 } 
 
  complexe sub( complexe& s1, complexe& s2)
 {
 	complexe f(s1.rel-s2.rel,s1.img-s2.img);					// defenition de l oprerateur soustraction
 	return f;
 } 
 
 int main(){
 	complexe z1(7,2),z2(9,4);					//Appel au deux nombres complexes
 	complexe s1(6,9),s2(3,2);
 	sum(z1,z2).afficher();						//Appel au fonction pour afficher
 	sub(s1,s2).afficher();
 	
 }
