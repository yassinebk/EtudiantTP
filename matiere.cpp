#include "matiere.h"
#include <string>
#include<iostream>
using namespace std;

matiere::matiere(string intitule, double coeff, double note) {
  intitule = intitule;
  cout << note <<"note de la matiere"<<endl;
  this->coefficient = coeff;
  this->note = note;
}
double matiere::getcoefficient() { return coefficient; }

double matiere::getnote() { return note; }

string matiere::getintitule() { return intitule; }

void matiere::setcoefficient(double c) { coefficient = c; }
void matiere::setnote(double n) { note = n; }

void matiere::setintitule(string i) { intitule = i; }
