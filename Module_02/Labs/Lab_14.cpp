#include <iostream>
#include <exception>
#include <memory>

using namespace std;

class MyException
{
    public:
};

int main()
{
    try
    {

    }
    catch ()
    {
        
    }
    cout << "After try/catch block main()" << endl; 
    cout << "End of main" << endl; 
    
    return 0;
}