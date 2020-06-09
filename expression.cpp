#include <iostream>
#include <cmath>

using namespace std;
int a, b,c;
void justFunction()
{
    cout<<"\n";
    cout <<"----------------------------------------------------------------------------------------"<<endl;
    cout<< "The program calculate the roots of any parabora expressing by taking three variables:"<<endl;
    cout <<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"\n";
}
void DataEntry()
{
    cout<<" Enter the first value: "<<endl;
    cin>> a;
    cout<<"Enter the second value: "<<endl;
    cin>> b;
    cout<< "Enter the third value : "<<endl;
    cin>>c;
}
int calculationD()
{
     return pow (b,2) - 4*a*c;
}
double calculateX1()
{
    return (-b+sqrt(calculationD()))/2*a;
}
double calculateX2()
{
    return (-b-sqrt(calculationD()))/2*a;
}
double calculationOneRoot()
{
    return -c/b;
}
double calculationDouble_Real_Roots()
{
    return -b/2*a;
}
void Display()
{
    int d= calculationD();

    if(a>0 || a<0)
    {
        if (d>0)
        {
             cout <<"-----------------------------------------------"<<endl;
            cout<<" The equation have two real roots which are: "<<endl;
            cout<<"The first root is: ";
            cout<<calculateX1()<<endl;
            cout<<"The second root is: ";
            cout<<calculateX2()<<endl;
            cout <<"-------------------------------------------------"<<endl;

        }
        else if(d==0)
        {
            cout <<"------------------------------------------"<<endl;
            cout<< "The equation has double real roots of "<<calculationDouble_Real_Roots()<<endl;
            cout <<"------------------------------------------"<<endl;
        }
        else
            {
              cout <<"--------------------------------"<<endl;
              cout<<"The equation has no real roots: "<<endl;
              cout <<"---------------------------------"<<endl;
            }
    }
    else
    {
        cout<<"The equation have one real root which is: "<<endl;
        cout<< "The root of the equation is given by: "<<calculationOneRoot()<<endl;
    }
}
int main()
{

    justFunction();
    DataEntry();
    Display();
    return 0;
}
