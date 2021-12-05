#include"matiere.h"
#include"filiere.h"
#include<iostream>
using namespace std ; 

int main(int argc, char** argv) {
	matiere m1("math", 2, 18); 
    matiere m2 (" physique", 3, 14);
matiere m3("math", 2, 18) ;
matiere m4("physique", 3, 14);
matiere m5("info",4,17);

	student s1(0004444, 51886500, 15.5,2,{m1,m2});
		student s2(0007744, 51886510, 15.5,3,{m3,m4,m5});
		s1.afficher(); 
		s1.calcul_moyenne(); 
		
		if(s1.reussi()) cout<<"reussi"<<endl; 
		else{cout<<"echec"<<endl; 
		} 
		
        s2.calcul_moyenne();	 
        s2.afficher();
		if(s2.reussi()) cout<<"reussi"<<endl; 
		else{cout<<"echec"<<endl; 
		} 
	return 0;
}
