#include<iostream>
#include<cmath>
const float PI = 4*atan(1);
using namespace std;
class Shape
{
public:
    float a,b,s,r;
    void getdata(float m, float n)
    {
        a=m;
        b=n;
    }
    void getside(float k)
    {
        s=k;
    }
    void getradius(float p)
    {
        r=p;
    }
};
class Rectangle : public Shape
{
public:
    float rect_area()
    {
        float result = a*b;
        return result;
    }
};
class Triangle : public Shape
{
public:
    float tri_area()
    {
        float result = 0.5*a*b;
        return result;
    }
};
class Square : public Shape
{
public:
    float sq_area()
    {
        float result = pow(s,2);
        return result;
    }
};
class Circle : public Shape
{
public:
    float cir_area()
    {
        float result = PI*pow(r,2);
        return result;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    Square sq;
    Circle c;
    int d;
    float length,breadth,base,height,side,radius,ar,as,atr,ac;
    cout<<"Welcome to AREA CALCULATOR!"<<endl;
    do
    {
        cout<<"\nChoose a shape whose Area you want to calculate: \n1. Rectangle\n2. Triangle\n3. Square\n4. Circle\n5. Exit\n\nEnter the choice number below:\n"<<endl;
        cin>>d;
        switch(d)
        {
        case 1:
            cout<<"\nEnter Length and Breadth of Rectangle respectively: "<<endl;
            cin>>length>>breadth;
            r.getdata(length, breadth);
            ar=r.rect_area();
            cout<<"\nArea of rectangle = "<<ar<<" sq.units\n"<<endl;
            break;
        case 2:
            cout<<"\nEnter Base and Height of Triangle respectively: "<<endl;
            cin>>base>>height;
            t.getdata(base, height);
            atr=t.tri_area();
            cout<<"\nArea of triangle = "<<atr<<" sq.units\n"<<endl;
            break;
        case 3:
            cout<<"\nEnter Side of Square: "<<endl;
            cin>>side;
            sq.getside(side);
            as=sq.sq_area();
            cout<<"\nArea of square = "<<as<<" sq.units\n"<<endl;
            break;
        case 4:
            cout<<"\nEnter Radius of Circle: "<<endl;
            cin>>radius;
            c.getradius(radius);
            ac=c.cir_area();
            cout<<"\nArea of circle = "<<ac<<" sq.units\n"<<endl;
            break;
        case 5:
            cout<<"\n'Twas nice helping you!"<<endl;
            break;
        default:
            cout<<"\nInvalid input! Try again!"<<endl;
        }
    }while(d!=5);
    return 0;
}
