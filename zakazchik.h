#ifndef zakazchik_H_INCLUDED
#define zakazchik_H_INCLUDED

#include "fizlico.h"
#include <string>
#include <iostream>
using namespace std;

class zakazchik : public fizlico
{
protected:
     string sname;
public:
    zakazchik();
    zakazchik(string name);
    zakazchik(const zakazchik &obj);

    void SetName(string name);
    string GetName() const;

    void print()const;
};

#endif
