#include "stdafx.h"
#include <iostream>
//#include "lang.h"
#include <stdlib.h>
using namespace std;
 
//class circle
//{
//public:
//    circle(double radius)
//    {
//    this->radius = radius; 
//    }
//    double printDiametr()
//    {
//        diameter = this->radius  * pi;
//        return diameter;
//    }
// private:
//        double radius; 
//    double pi;
//        double diameter; 
//        double length; 
//        double area; 
//};
// void lang();
int main()
{
        //lang();
        double radius;
    double pi = 3.14158;
       /* circle One(radius);*/
        cout << "Введите радиус" << endl;
        cin >> radius;
    /*One.printDiametr();*/
 cout<<"            Diametr="<<2*radius<<"            Dlina="<<2*pi*radius<<"           plosha="<<2*pi*radius*radius;
        system("PAUSE");
        return 0;
}
