#include <iostream>
#include <string>
using namespace std;

class A
{   
    public:
        A()
        {
            cout << "Constructor of class A" << "\n";
        }
        
        A(int param)
        {
            cout << "Parametrized Constructor of class A" << "\n";
            m_paramA = param;
        }
    protected:
        int m_paramA;
};

// Solution 2: 
class C1 : public virtual A
//class C1 : public A
{
    public:
        C1(int param) : A(param)
        {
            cout << "Constructor of class C1" << "\n";
        }
};
// Solution 2: 
class C2 : public virtual A
//class C2 : public A
{
    public:
        C2(int param) : A(param)
        {
            cout << "Constructor of class C2" << "\n";
        }
};

class D : public C1, public C2
{
    public:
        D(int param) : C1(param), C2(param)
        {
            cout << "Constructor of class D" << "\n";
            m_paramA = 1;
            //Solution 1: C1::m_paramA = 1;
        }
};

int main()
{
    D myD(5);
}