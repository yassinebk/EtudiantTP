#pragma once
#include "Etudiant.h"
#include "matiere.h"
#include <iostream>

using namespace std;

student::student(int n, int tel, double moy, int nbr,
                 vector<matiere> Matieres) {
  numCarte = n;
  telephone = tel;
  moyenne = moy;
  nbr_matiere = nbr;

  this->Matiere = Matieres;
}

void student::afficher() {
  cout << "cin" << numCarte << "telephone " << telephone << " moyenne "
       << moyenne << "nbr matiere : " << nbr_matiere << endl;
  for (int i = 0; i < nbr_matiere; i++) {
    cout << "la note de la matiere " << Matiere[i].getintitule() << " est "
         << Matiere[i].getnote() << " elle est de coefficient "
         << Matiere[i].getcoefficient() << endl;
  }
}

void student::calcul_moyenne() {
  double sc = 0;
  double s = 0;
  for (int i = 0; i < nbr_matiere; i++) {
    sc = sc + Matiere[i].getcoefficient();
    s = s + Matiere[i].getnote() * Matiere[i].getcoefficient();
  }
  cout << "Nombre des coefficients"<<sc<<endl<<"Somme des matieres: "<<s<<endl;
  moyenne = s / sc;
}

bool student::reussi() { return (moyenne >= 10); }

int student::getnumCarte() { return numCarte; }

int student::gettelephone() { return telephone; }

int student::getnbrMatiere() { return nbr_matiere; }

void student::setnumCarte(int a) { numCarte = a; }

void student::setnbr_matiere(int a) { nbr_matiere = a; }

void student::settelephone(int b) { telephone = b; }

void student::setmoyenne(double a) { moyenne = a; }
