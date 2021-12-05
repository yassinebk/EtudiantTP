# pragma once
#include<vector>
#include<string>
#include"Etudiant.h"

class filiere
{
	public:
		
		filiere(int a, int nbr, vector<student>etudiant); 
		void afficher(); 
		int getIdFiliere(); 
		int getNbrEtudiant(); 
		void setNbrEtudiant(int a);
		void setIdFiliere(int a); 
		void setEtudiants(vector<student> Etudiant); 
		 vector<student> getEtudiants(); 
		 
		
	private: 
	int id_filiere; 
	int nbr_etudiants; 
 
	vector<student> Etudiant;  
};

