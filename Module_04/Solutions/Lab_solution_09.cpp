#include <iostream>
 
using namespace std;

class myPointer
{
    public:
        myPointer()
        {
            cout << "Construct Pointer" << endl;
            ptr = new int;
        }
        ~myPointer()
        {
            cout << "Destruct Pointer" << endl;
            delete ptr;
        }
        int getValue() { return *ptr; }
        void setValue(int new_value) { *ptr = new_value; }
    private:
        int* ptr;
};

int main()
{
    myPointer myPtr;
    myPtr.setValue(6);
    cout << "Value = " << myPtr.getValue() << endl; 
    return 0;
}