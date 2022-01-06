#ifndef VOYAGEUR_H
#define VOYAGEUR_H
#include <string>
#include <iostream>
using namespace std;

class voyageur
{
    public:
        voyageur();
        virtual ~voyageur();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        string Getprenom() { return prenom; }
        void Setprenom(string val) { prenom = val; }
        int Getref_voyage() { return ref_voyage; }
        void Setref_voyage(int val) { ref_voyage = val; }

    protected:
        int id;
        string nom;
        string prenom;
        int ref_voyage;

    private:
};

#endif // VOYAGEUR_H
