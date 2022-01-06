#ifndef CROISIERE_H
#define CROISIERE_H

#include <voyage.h>
#include<vector>

class croisiere : public voyage
{
    public:
        croisiere();
        virtual ~croisiere();

    protected:
    vector <string> villes;
    private:
};

#endif // CROISIERE_H
