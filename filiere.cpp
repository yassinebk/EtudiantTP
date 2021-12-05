#include "filiere.h"
#include"Etudiant.h"
#include"matiere.h"
#include<iostream>
#include<vector>
using namespace std;

filiere::filiere(int a, int nbr , vector<student>etudiant)
{
	id_filiere=a; 
	nbr_etudiants=nbr; 
	
	this->Etudiant=etudiant; 
           
}


    int filiere::getIdFiliere()  {
        return id_filiere;
    }

    void filiere::setIdFiliere(int idFiliere) {
        this->id_filiere = idFiliere;
    }

    int filiere::getNbrEtudiant() {
        return nbr_etudiants;
    }

    void filiere::setNbrEtudiant(int nbrEtudiant) {
        this->nbr_etudiants = nbrEtudiant;
    }

    vector<student> filiere::getEtudiants() {
        return Etudiant;
    }

    void filiere::setEtudiants(vector<student> Etudiant) {
        this->Etudiant = Etudiant;
    }

    void filiere::afficher(){
        for(int i=0; i< nbr_etudiants ;i++){
            Etudiant[i].afficher();
        }
    }

