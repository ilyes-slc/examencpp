#include "compagnie.h"

compagnie::compagnie()
{
    //ctor
}

compagnie::~compagnie()
{
    //dtor
}


vector <voyage> :: iterator compagnie :: recherchevoyage(int ref)
{
    vector <voyage> :: iterator it;
    for(it=voyages.begin();it!=voyages.end();++it)
    {
        if ((*it).Getreference() == ref)
        {
            return (it);
        }
    }
   return voyages.end();
}

vector <voyageur>::iterator compagnie::recherchevoyageur(int id)
{
    vector <voyageur> :: iterator it;
    for(it=voyageurs.begin();it!=voyageurs.end();++it)
    {
        if ((*it).Getid() == id)
        {
            return (it);
        }
    }
   return voyageurs.end();
}


void compagnie::ajouterVoyage(){
        int reference;
        string ville_depart;
        string ville_arrive;
        string date_depart;
        string date_arrive;
    std::cin>>reference;
    std::cin>>ville_arrive;
    std::cin>>ville_arrive;
    std::cin>>date_arrive;
    std::cin>>date_depart;
    voyage V;
    V.Setdate_arrive(date_arrive);
    V.Setdate_depart(date_depart);
    V.Setreference(reference);
    V.Setville_arrive(ville_arrive);
    V.Setville_depart(ville_depart);

    if(recherchevoyage(reference) == voyages.end() ){
            voyages.push_back(V);
        }
}

void compagnie::ajouterVoyageur()
{
    int id;
        string nom;
        string prenom;
        int ref_voyage;
    std::cin>>id;
    std::cin>>nom;
    std::cin>>prenom;
    std::cin>>ref_voyage;
    voyageur V;
    V.Setid(id);
    V.Setnom(nom);
    V.Setprenom(prenom);

    if(recherchevoyageur(id) == voyageurs.end() ){
            voyageurs.push_back(V);
        }
}


void compagnie::affectervoyage()
{
    int id,reference;
    std::cin>>id;
    std::cin>>reference;

    try{
        if((recherchevoyage(reference) != voyages.end()) && (recherchevoyageur(id) != voyageur.end()) && (recherchevoyageur(id).Getref_voyage() != reference ) ){
            vector <voyageur> :: iterator it;
    for(it=voyageurs.begin();it!=voyageurs.end();++it)
    {
        if ((*it).Getid() == id)
        {
            (*it).Setref_voyage(reference);
        }
    }
        }else{
            throw("erreur");
        }
    }catch(string err){
        cout << err;
    }
}
