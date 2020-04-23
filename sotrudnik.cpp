#include "sotrudnik.h"
using namespace std;


sotrudnik::sotrudnik(string imya, string familia, string otch, int vozr, string dolg, int oklad) : fizlico(imya,familia,otch,vozr)
{
    sdolg=dolg;
    if (!SetOklad(oklad))
    {
       soklad=0;
    }
}

sotrudnik::sotrudnik()
{
    sdolg = "Boss";
    soklad = 17000;
}

void sotrudnik::SetDolg(string dolg)
{
    sdolg = dolg;
}

bool sotrudnik::SetOklad(int oklad)
{
   if (oklad<0)
    {
    return false;
    }
    else
    {
    soklad = oklad;
    return true;
    }
}

string sotrudnik::GetDolg()const
{
     return sdolg;
}

int sotrudnik::GetOklad()const
{
     return soklad;
}
