#include<iostream>
#include<cmath>
const double PI = 4*atan(1);
using namespace std;
void add()
{
    double a,b;
    cout<<"\nEnter two numbers you wish to add: "<<endl;
    cin>>a>>b;
    cout<<"\n"<<a<<"+"<<b<<" = "<<a+b;
}
void subtract()
{
    double a,b;
    cout<<"\nEnter two numbers you wish to subtract: "<<endl;
    cin>>a>>b;
    cout<<"\n"<<a<<"-"<<b<<" = "<<a-b;
}
void multiply()
{
    double a,b;
    cout<<"\nEnter two numbers you wish to multiply: "<<endl;
    cin>>a>>b;
    cout<<"\n"<<a<<"*"<<b<<" = "<<a*b;
}
void divide()
{
    double a,b;
    cout<<"\nEnter two numbers you wish to divide: "<<endl;
    cin>>a>>b;
    cout<<"\n"<<a<<"/"<<b<<" = "<<a/b;
}
void power()
{
    double x, n;
    cout<<"\nEnter the base and power respectively: "<<endl;
    cin>>x>>n;
    cout<<"\n"<<x<<"^"<<n<<" = "<<pow(x,n);
}
void root()
{
    int i;
    double sq, cu;
    do
    {
        cout<<"\nEnter what would you like to do: \n1. Calculate Square Root\n2. Calculate Cube Root\n0. Go to Main Menu"<<endl;
        cin>>i;
        switch(i)
        {
        case 1:
            {
                cout<<"\nEnter the number whose Square Root you want to calculate: \n"<<endl;
                cin>>sq;
                cout<<"\nSquare Root of "<<sq<<" is "<<sqrt(sq)<<endl;
            }
            break;
        case 2:
            {
                cout<<"\nEnter the number whose Cube Root you want to calculate: \n"<<endl;
                cin>>cu;
                cout<<"\nCube Root of "<<cu<<" is "<<cbrt(cu)<<endl;
            }
            break;
        case 0:
            break;
        default:
            cout<<"\nInvalid input! Try again!"<<endl;
            break;
        }

    }while(i!=0);
}
void equation()
{
    double a,b,c,i;
    double discr, im;
    cout<<"\nEnter the variables a,b,c respectively: \n"<<endl;
    cin>>a>>b>>c;
    discr=(b*b)-4*a*c;
    im=sqrt(abs(discr));
    if(discr>0)
        cout<<"\nThe roots of the equation "<<a<<"x^2+"<<b<<"x + "<<c<<" = 0 are: "<<(-b+sqrt(discr))/(2*a)<<", "<<(-b-sqrt(discr))/(2*a)<<endl;
    else if(discr=0)
        cout<<"\nThe roots of the equation "<<a<<"x^2+"<<b<<"x+"<<c<<" = 0 are: "<<-b/(2*a)<<endl;
    else
        cout<<"\nThe roots of the equation "<<a<<"x^2+"<<b<<"x+"<<c<<" = 0 are: "<<-b/(2*a)<<"+"<<im/(2*a)<<"i and"<<-b/(2*a)<<"-"<<im/(2*a)<<"i"<<endl;
}
void trigonometry()
{
    int i;
    double angler, angled,x;
    do
    {
        cout<<"\nEnter a choice: \n1. sin(x)\t\t2. cos(x)\n3. tan(x)\t\t4. cot(x)\n5. sec(x)\t\t6. cosec(x)\n7. arcsin(x)\t\t8. arccos(x)\n9. arctan(x)\t\t10. arccot(x)\n11. arcsec(x)\t\t12. arccosec(x)\n0. Go back to Main Menu"<<endl;
        cin>>i;
        switch(i)
        {
        case 1:
            cout<<"\nEnter the value of angle in degrees: "<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\nsin("<<angled<<") = "<<sin(angler)<<endl;
            break;
        case 2:
            cout<<"\nEnter the value of angle in degrees: "<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\ncos("<<angled<<") = "<<cos(angler)<<endl;
            break;
        case 3:
            cout<<"\nEnter the value of angle in degrees: "<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\ntan("<<angled<<") = "<<tan(angler)<<endl;
            break;
        case 4:
            cout<<"\nEnter the value of angle in degrees: "<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\ncot("<<angled<<") = "<<1/tan(angler)<<endl;
            break;
        case 5:
            cout<<"\nEnter the value of angle in degrees: "<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\nsec("<<angled<<") = "<<1/cos(angler)<<endl;
            break;
        case 6:
            cout<<"\nEnter the value of angle in degrees: "<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\ncosec("<<angled<<") = "<<1/sin(angler)<<endl;
            break;
        case 7:
            cout<<"\nEnter the value of x: "<<endl;
            cin>>x;
            angler=asin(x);
            angled=angler*(180/PI);
            cout<<"\narcsin("<<x<<") = "<<angled<<endl;
            break;
        case 8:
            cout<<"\nEnter the value of x: "<<endl;
            cin>>x;
            angler=acos(x);
            angled=angler*(180/PI);
            cout<<"\narccos("<<x<<") = "<<angled<<endl;
            break;
        case 9:
            cout<<"\nEnter the value of x: "<<endl;
            cin>>x;
            angler=atan(x);
            angled=angler*(180/PI);
            cout<<"\narctan("<<x<<") = "<<angled<<endl;
            break;
        case 10:
            cout<<"\nEnter the value of x: "<<endl;
            cin>>x;
            angler=atan(1/x);
            angled=angler*(180/PI);
            cout<<"\narccot("<<x<<") = "<<angled<<endl;
            break;
        case 11:
            cout<<"\nEnter the value of x: "<<endl;
            cin>>x;
            angler=acos(1/x);
            angled=angler*(180/PI);
            cout<<"\narcsec("<<x<<") = "<<angled<<endl;
            break;
        case 12:
            cout<<"\nEnter the value of x: "<<endl;
            cin>>x;
            angler=asin(1/x);
            angled=angler*(180/PI);
            cout<<"\narccosec("<<x<<") = "<<angled<<endl;
            break;
        case 0:
            break;
        default:
            cout<<"\nInvalid input! Please try again!"<<endl;
        }
    }while(i!=0);
}
void hyperbolic()
{
    int i;
    double angled, angler;
    do
    {
        cout<<"\nEnter a choice:\n1. sinh(x)\n2. cosh(x)\n3. tanh(x)\n0. Go back to Main Menu"<<endl;
        cin>>i;
        switch(i)
        {
        case 1:
            cout<<"\nEnter the value of angle in Degree:"<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\nsinh("<<angled<<") = "<<sinh(angler)<<endl;
            break;
        case 2:
            cout<<"\nEnter the value of angle in Degree:"<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\ncosh("<<angled<<") = "<<cosh(angler)<<endl;
            break;
        case 3:
            cout<<"\nEnter the value of angle in Degree:"<<endl;
            cin>>angled;
            angler=angled*(PI/180);
            cout<<"\ntanh("<<angled<<") = "<<tanh(angler)<<endl;
            break;
        case 0:
            break;
        default:
            cout<<"\nInvalid input! Please try again!"<<endl;
        }
    }while(i!=0);
}
int main()
{
    int n;
    cout<<"---------------Welcome to the Scientific Calculator!---------------"<<endl;
    do
    {
        cout<<"\nEnter a choice: \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. x^n\n6. Square/Cube Root\n7. Quadratic Equation\n8. Trigonometry Menu\n9. Hyperbolic Menu\n0. Exit"<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            power();
            break;
        case 6:
            root();
            break;
        case 7:
            equation();
            break;
        case 8:
            trigonometry();
            break;
        case 9:
            hyperbolic();
            break;
        case 0:
            cout<<"\n---------------It was nice helping you! Bye!!---------------\n"<<endl;
            break;
        default:
            cout<<"Umm, seems like you didn't give an input as desired, so please try again! :)"<<endl;
            break;
        }
    }while(n!=0);
    return 0;
}
