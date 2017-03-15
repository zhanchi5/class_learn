#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cmath>
#include "Areas.h"





using namespace std;




int main()
{

    float a = 0,b = 0,c = 0, p;
    int q = 0;
    Areas S1,S2;

    cout << "Введите длины стороны: "<< endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    S1.Triangle(a,b,c,p);
    S2.Triangle(a,b,q);

    cout << "Введите угол между сторонами a и b в градусах" << endl;
    cout << "q= ";
    cin >> q;
    cout << "S1= " << S1.Triangle(a,b,c,p) << endl;
    cout << "S2= " << S2.Triangle(a,b,q) << endl;



    cin.get();
    return 0;
}
