#include "fizlico.h"
#include "programmist.h"
#include "zakazchik.h"
#include "sotrudnik.h"
#include "rukovoditel.h"
#include <iostream>

using namespace std;

int main()
{
    string name,imya,familia,otch,dolg;
    int num,vozr,oklad;
    zakazchik s1;
    programmist s2;
    rukovoditel s3;
    s1.print();
    cout << endl;
    s2.print();
    cout << endl;
    s3.print();
    cout << endl;
    cout << "------------------"<<endl;
    cout << "Vvedite name" << endl;
    cin >> name;
    zakazchik s4(name);
    s1=s4;
    cout << "Novie dannye" << endl;
    s1.print();
    cout << endl;
    cout << "Vvedite imya" << endl;
    cin >> imya;
    cout << "Vvedite familia" << endl;
    cin >> familia;
    cout << "Vvedite otch" << endl;
    cin >> otch;
    cout << "Vvedite vozr" << endl;
    cin >> vozr;
    cout << "Vvedite dolg" << endl;
    cin >> dolg;
    cout << "Vvedite oklad" << endl;
    cin >> oklad;
    cout << "Vvedite num" << endl;
    cin >> num;
    rukovoditel s5(imya,familia,otch,vozr,dolg,oklad,num);
    s3=s5;
    s3.print();
}
