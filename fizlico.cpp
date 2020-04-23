#include "fizlico.h"
using namespace std;

fizlico::fizlico(string imya, string familia,string otch,int vozr)
{
    simya=imya;
    sfamilia=familia;
    sotch=otch;
    if (!SetVozr(vozr))
    {
       svozr=0;
    }
}

fizlico::fizlico()
{
    simya = "Vitalii";
    sfamilia = "Solyaridze";
    sotch = "Arthasovich";
    svozr = 24;
}

void fizlico::SetImya(string imya)
{
    simya = imya;
}

void fizlico::SetFamilia(string familia)
{
    sfamilia = familia;
}

void fizlico::SetOtch(string otch)
{
    sotch = otch;
}

bool fizlico::SetVozr(int vozr)
{
   if (vozr<0)
    {
    return false;
    }
    else
    {
    svozr = vozr;
    return true;
    }
}

string fizlico::GetImya()const
{
     return simya;
}

string fizlico::GetFamilia()const
{
     return sfamilia;
}

string fizlico::GetOtch()const
{
     return sotch;
}

int fizlico::GetVozr()const
{
     return svozr;
}
