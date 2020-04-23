#ifndef sotrudnik_H_INCLUDED
#define sotrudnik_H_INCLUDED

#include "fizlico.h"
#include <string>

using namespace std;

class sotrudnik : public fizlico
{
protected:
    string sdolg;
    int soklad;
public:

    sotrudnik();
    sotrudnik(string imya, string familia, string otch, int vozr, string dolg, int oklad);

    void SetDolg(string dolg);
    bool SetOklad(int oklad);

    string GetDolg() const;
    int GetOklad() const;

    virtual void print ()const = 0;
};

#endif
