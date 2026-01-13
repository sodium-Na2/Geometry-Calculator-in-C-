#include <iostream>
using namespace std;
int main ()
{
    double far,cel,kel;

    //Fahrenheit
    cout <<"Enter celsius:" <<endl;
    cin >> cel;

    far = 1.8*cel+32;
    cout <<"Fahrenheit is:" <<far <<endl;


    // Celcius
    cout <<"Enter fahrenheit:" <<endl;
    cin >> far;

    cel = (far-32)/1.8;
    cout <<"The Celcius is:" << cel <<endl;


    //The kelvin
    cout <<"Enter celsius:" <<endl;
    cin >> cel;

    kel = cel + 273;
    cout <<"The kelvin is:"  <<kel <<endl;

     return 0;

}

