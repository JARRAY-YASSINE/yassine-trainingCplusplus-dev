#include <iostream>
 
using namespace std;

class myPointer
{
    public:
        myPointer()
        {
            cout << "Construct Pointer" << endl;
        }
        ~myPointer()
        {
            cout << "Destruct Pointer" << endl;
        }
        int getValue() {  }
        void setValue(int new_value) {  }
    private:

};

int main()
{
    myPointer myPtr;
    myPtr.setValue(6);
    cout << "Value = " << myPtr.getValue() << endl; 
    return 0;
}