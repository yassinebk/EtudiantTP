#pragma once
#include "matiere.h"
#include "string.h"
#include <vector>

class student
{
	public:
		student(int n , int tel , double moy , int nbr , vector<matiere>Matieres);
		void afficher(); 
		void calcul_moyenne(); 
		bool reussi();
		int getnumCarte(); 
		int gettelephone(); 
		double getmoyenne(); 
		int getnbrMatiere(); 
		void setnumCarte(int a); 
		void settelephone(int b );  
		void setnbr_matiere(int a); 
		void setmoyenne(double a); 
		 
	private:
		int numCarte; 
		int telephone; 
		double moyenne; 
		int nbr_matiere; 
	vector<matiere> Matiere;     
		
		
};

