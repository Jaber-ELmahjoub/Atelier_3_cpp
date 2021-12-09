//Exercice 9:
#include <iostream>

using namespace std;

class check_fois {      //Declaration du class check_fois
  
    public :
    static int calcul;      // Declaration du variable static calcul
    void call(){
        cout<< "la fonction call a ete appelle dans le programme: "<<++calcul<<" fois"<<endl; 
    
    }
};

int check_fois ::calcul=0;

int main(){

    check_fois t1,t2,t3,t4,t5;      // Declaration des objets de la class check_fois
    t1.call();
    t2.call();		
    t3.call();						//Appelle a la fonction call 5 fois
    t4.call();						
    t5.call();

    return 0 ;
}
