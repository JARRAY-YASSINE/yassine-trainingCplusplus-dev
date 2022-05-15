#include <iostream>
#include <exception>
#include <memory>

using namespace std;

class MyException : public std::exception
{
    public:
        const char* what() const throw ()
        {
            return "My Exception customized message";
        }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException& e)
    {
        cout << "In catch: exception: " << e.what() << endl;
    }
    cout << "After try/catch block main()" << endl; 
    cout << "End of main" << endl; 
    
    return 0;
}