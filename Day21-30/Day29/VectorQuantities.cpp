#include<iostream>
#include<cmath>
using namespace std;
class Vector
{
private:
    float x,y,z;                      // The coefficients of the vector.
public:
    Vector(float x,float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector operator+(Vector v)      // Vector Addition
    {
        float x1,y1,z1;
        x1=x+v.x;
        y1=y+v.y;
        z1=z+v.z;
        return Vector(x1,y1,z1);
    }
    Vector operator-(Vector v)      // Vector Subtraction
    {
        float x1,y1,z1;
        x1=x-v.x;
        y1=y-v.y;
        z1=z-v.z;
        return Vector(x1,y1,z1);
    }
    float operator^(Vector v)         // Scalar Product of Vectors
    {
        float x1,y1,z1;
        x1=x*v.x;
        y1=y*v.y;
        z1=z*v.z;
        return (x1+y1+z1);
    }
    Vector operator*(Vector v)      // Vector Product of Vectors
    {
        float x1,y1,z1;
        x1=(y*v.z)-(z*v.y);
        y1=(z*v.x)-(x*v.z);
        z1=(x*v.y)-(y*v.x);
        return Vector(x1,y1,z1);
    }
    float scalarProd(Vector v1, Vector v2, Vector v3)
    {
        return (v1^(v2*v3));
    }
    Vector vectorProd(Vector v1, Vector v2, Vector v3)
    {
        return (v1*(v2*v3));
    }
    float magnitude()
    {
        return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    }
    friend ostream& operator<<(ostream& out, const Vector& v)       // Vector Output
    {
        out<<v.x<<"i ";
        if(v.y>=0)
            out<<"+";
        out<<v.y<<"j ";
        if(v.z>=0)
            out<<"+";
        out<<v.z<<"k "<<endl;
        return out;
    }
};
int main()
{
    int k;
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;
    cout<<"Enter the x,y,z coordinates of 1st Vector respectively: "<<endl;
    cin>>x1>>y1>>z1;
    cout<<"Enter the x,y,z coordinates of 2nd Vector respectively: "<<endl;
    cin>>x2>>y2>>z2;
    cout<<"\nEnter the x,y,z coordinates of 3rd Vector respectively: "<<endl;
    cin>>x3>>y3>>z3;
    Vector v1(x1,y1,z1), v2(x2,y2,z2),v3(x3,y3,z3);;
    do
    {
        cout<<"\n\nMenu: \nActions with first 2 Vectors\n1. Add the Vectors\n2. Subtract the Vectors\n3. Dot Product\n4. Cross Product\nActions with all three Vectors\n5. Scalar Triple Product\n6. Vector Triple Product\n7. Magnitude of Vectors\n0. Exit\n\nEnter a choice: \n";
        cin>>k;
        switch(k)
        {
        case 1:
            cout<<"\nThe Addition of the Vectors entered is: "<<(v1+v2);
            cout<<endl;
            break;
        case 2:
            cout<<"\nThe Subtraction of the Vectors entered is: "<<(v1-v2);
            cout<<endl;
            break;
        case 7:
            cout<<"\nThe Magnitude of the Vector V1 is: "<<v1.magnitude()<<endl;
            cout<<"\nThe Magnitude of the Vector V2 is: "<<v2.magnitude()<<endl;
            cout<<"\nThe Magnitude of the Vector V3 is: "<<v3.magnitude()<<endl;
            break;
        case 3:
            cout<<"\nThe Dot Product of the Vectors entered is: "<<(v1^v2);
            cout<<endl;
            break;
        case 4:
            cout<<"\nThe Cross Product of the Vectors entered is: "<<(v1*v2);
            cout<<endl;
            break;
        case 5:
            cout<<"\nThe Scalar Triple Product of the Vectors entered is: "<<v1.scalarProd(v1,v2,v3);
            cout<<endl;
            break;
        case 6:
            cout<<"\nThe Vector Triple Product of the Vectors entered is: "<<v1.vectorProd(v1,v2,v3);
            cout<<endl;
            break;
        case 0:
            cout<<"\nThanks!"<<endl;
            break;
        default:
            cout<<"\nWrong choice entered! Please try again!"<<endl;
        }
    }while(k!=0);
    return 0;
}