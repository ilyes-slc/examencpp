#ifndef VOYAGE_H
#define VOYAGE_H
#include <iostream>

using namespace std;

class voyage
{
    public:
        voyage();
        virtual ~voyage();

        int Getreference() { return reference; }
        void Setreference(int val) { reference = val; }
        string Getville_depart() { return ville_depart; }
        void Setville_depart(string val) { ville_depart = val; }
        string Getville_arrive() { return ville_arrive; }
        void Setville_arrive(string val) { ville_arrive = val; }
        string Getdate_depart() { return date_depart; }
        void Setdate_depart(string val) { date_depart = val; }
        string Getdate_arrive() { return date_arrive; }
        void Setdate_arrive(string val) { date_arrive = val; }

    protected:
        int reference;
        string ville_depart;
        string ville_arrive;
        string date_depart;
        string date_arrive;

    private:
};

#endif // VOYAGE_H
