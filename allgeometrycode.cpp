#include <iostream>
using namespace std;
int main ()
{
    double base,height,area,width,a,b,h,length,perimeter,volume,radius,angle;
   const double pi =3.1416;

   //1.Area of triangle
     cout <<"Enter  base:" <<endl;
     cin >>base;
     cout <<"Enter a height:" <<endl;
     cin >>height;

     area= (float)1/2 *base *height;
     cout <<"Area of triangle is =" <<area <<endl;

     //2.area of rectangle

    cout <<"Enter width:" <<endl;
    cin >> width;
    cout <<"Enter height:" <<endl;
    cin >> height;

    area = width * height;

    cout <<"area of rectangle is:" <<area <<endl;

    //3.area of trapezoid

    cout <<"Enter parallel side a:" <<endl;
    cin >> a;
    cout <<"Enter parallel side b:" <<endl;
    cin >> b;
    cout <<"Enter height h:" <<endl;
    cin >> h;

    area = 0.5*(a+b)*h; //formula 1/2(a+b)*h
    cout <<"The area of trapezoid is =" <<area <<endl;

    //4.elipse

    cout <<"Enter axis a:" <<endl;
    cin >> a;
    cout <<"Enter axis b:" <<endl;
    cin >> b;
    area = pi*a*b;
    cout <<"The area of Ellipse is:" <<area <<endl;

    // 5.perimeter of rectangle

    cout <<"Enter length:" <<endl;
    cin >> length;
    cout <<"Enter width:" <<endl;
    cin >>width;

    perimeter = 2 * (length + width);
    cout <<"Enter perimeter of rectangle:" <<perimeter <<endl;


    //6.Volume of cylinder is

    cout <<"Enter radius:" <<endl;
    cin >> radius;

    cout <<"Enter height:" <<endl;
    cin >> height;

    volume = pi* radius*radius *height; //formula v=pi * a^2 *h
    cout <<"The Volume of cylinder is:" <<volume <<endl;

    //7.area of square


    cout <<"Enter length of side a:" <<endl;
    cin >>a;

    area = a*a;
    cout <<"area of square is:" <<area <<endl;

    //8.area of parallelogram

    cout <<"Enter base:" <<endl;
    cin >> base;
    cout <<"Enter vertical height:" <<endl;
    cin >>height;

    area = base * height;
    cout <<"The area of parallelogram is:" <<area <<endl;

    //9.area of circle

        cout << "Enter radius:" <<endl;
        cin>>radius;

        area = pi*(radius*radius);
        cout <<"The area of circle is =" <<area <<endl;

        //10.area of sector


     cout << "Enter radius:" <<endl;
     cin >> radius;

    cout <<"Enter angle:" <<endl;
    cin >>angle;

    area = 0.5*(radius*radius)*angle; //formula:area =1/2*radius^2*angle
    cout <<"The area of sector is:" <<area <<endl;

    return 0;


}

