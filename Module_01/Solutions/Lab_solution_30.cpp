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
};

class B
{
    public:
        B()
        {
            cout << "Constructor of class B" << "\n";
        }
};

class C
{
    public:
        C()
        {
            cout << "Constructor of class C" << "\n";
        }
};

class C1 : public A, public B, public C
{

};

class C2 : public B, public A, public C
{

};

class C3 : public C, public B, public A
{

};

int main()
{
    C1 myC1;
	C2 myC2;
	C3 myC3;
}