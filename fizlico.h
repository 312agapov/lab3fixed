#ifndef fizlico_H_INCLUDED
#define fizlico_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class fizlico{
protected:
string simya,sfamilia,sotch;
int svozr;
public:
    fizlico();
    fizlico(string imya,string familia,string otch, int vozr);
    fizlico(const fizlico &obj);

    void SetImya(string imya);
    void SetFamilia(string familia);
    void SetOtch(string otch);
    bool SetVozr(int vozr);

    string GetImya() const;
    string GetFamilia() const;
    string GetOtch() const;
    int GetVozr() const;

	virtual void print()const = 0;
};

#endif
