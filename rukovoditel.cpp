#include "rukovoditel.h"

using namespace std;

rukovoditel::rukovoditel(string imya, string familia, string otch, int vozr, string dolg, int oklad, int num) : sotrudnik(imya,familia,otch,vozr,dolg,oklad)
{
    if (!SetNum(num))
    {
        snum=0;
    }
}

rukovoditel::rukovoditel()
{
    snum = 36;
}

rukovoditel::rukovoditel(const rukovoditel &obj)
{
    snum = obj.snum;
    simya = obj.simya;
    sfamilia = obj.sfamilia;
    sotch = obj.sotch;
    svozr = obj.svozr;
    sdolg = obj.sdolg;
    soklad = obj.soklad;
}

bool rukovoditel::SetNum(int num)
{   if (num<0)
    {
    return false;
    }
    else
    {
    snum = num;
    return true;
    }
}

int rukovoditel::GetNum()const
{
     return snum;
}

void rukovoditel::print()const
{
    cout << snum << "-" << simya << "-" << sfamilia << "-" << sotch << "-" << svozr << "-" << sdolg << "-" << soklad << endl;
}

