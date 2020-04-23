#include "programmist.h"

using namespace std;

programmist::programmist(string imya, string familia, string otch, int vozr, string dolg, int oklad, string name) : sotrudnik(imya,familia,otch,vozr,dolg,oklad)
{
    sname=name;
}

programmist::programmist()
{
    sname = "Project2";
}

programmist::programmist(const programmist &obj)
{
    simya = obj.simya;
    sfamilia = obj.sfamilia;
    sotch = obj.sotch;
    svozr = obj.svozr;
    sdolg = obj.sdolg;
    soklad = obj.soklad;
    sname = obj.sname;
}

void programmist::SetName(string name)
{
    sname = name;
}

string programmist::GetName()const
{
     return sname;
}

void programmist::print()const
{
    cout << sname<< "-" << simya << "-" << sfamilia << "-" << sotch << "-" << svozr << "-" << sdolg << "-" << soklad << endl;
}

