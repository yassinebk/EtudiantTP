#ifndef MATIERE_H
#define MATIERE_H
#include "string"
using namespace std;

class matiere {
public:
  matiere(string intitule, double coeff, double note);
  string getintitule();
  double getcoefficient();
  double getnote();
  void setintitule(string i);
  void setcoefficient(double c);
  void setnote(double n);

private:
  string intitule;
  double coefficient;
  double note;
};

#endif
