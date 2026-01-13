#include <iostream>
#include <conio.h>
using namespace std;
int main()
{  double num1,num2,num3,sum,sub,mul,div;
    cout <<"Enter first number:" <<endl;
     cin >>num1;
    cout <<"Enter second number:" <<endl;
     cin >>num2;
    cout <<"Enter third number:" <<endl;
     cin >>num3;

     //summation

     sum = num1+num2+num3;
     cout<<"Summation of 3 number is :" <<sum  <<endl;

     //substraction

     sub = num1-num2-num3;
     cout <<"substraction of 3 number is :" <<sub <<endl;

    //multiplication

    mul = num1*num2*num3;
    cout <<"Multiplicatioon of 3 number is :" <<mul <<endl;

    //division

    div = num1/num2/num3;
    cout <<"division of 3 number is :" <<div <<endl;

    getch();
}
