#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include <string>
#include <vector>
#include "voyage.h"
#include "voyageur.h"
#include <iostream>
using namespace std;

class compagnie
{
    public:
        compagnie();
        virtual ~compagnie();

        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        vector <voyage> :: iterator recherchevoyage(int ref);
        vector <voyageur> :: iterator recherchevoyageur(int id);
        void ajouterVoyage();
        void ajouterVoyageur();
        void affectervoyage();



    protected:

    vector <voyage> voyages;
    vector <voyageur> voyageurs;
    private:
        string nom;
};

#endif // COMPAGNIE_H
