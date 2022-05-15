#include <iostream>
#include <exception>
#include <memory>

using namespace std;

class Device
{
    public:
        Device(std::string const model, int systemID, bool isConnected = false)
        {
            cout << "Construct Device Object "<< model << endl;
            m_model = model;
            m_systemID = systemID;
            m_isConnected = isConnected;
        }
        ~Device()
        {
             cout << "Destroy Device Object "<< m_model << endl;
        }
    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
        bool m_isConnected = false;
};

int createAnotherObject()
{
    Device myDevice3("Device 3", 0x245); 
    cout << "Throw exception : logic_error" << endl;
    throw logic_error("Illogic");
    return 0;
}

int createObject()
{
    Device myDevice2("Device 2", 0x256); 
    int ret = 0;
    try
    {
        ret = createAnotherObject();
        cout << "After calling createAnotherObject()" << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    cout << "After try/catch block createObject()" << endl;
    return ret;
}

int main()
{
    try
    {
        Device myDevice1("Device 1", 0x264); 
        int ret = createObject();
        cout << "createObject() returned " << ret << endl;
    }
    catch (exception& e)
    {
        cout << "In catch: exception: " << e.what() << endl;
    }
    cout << "After try/catch block main()" << endl; 
    cout << "End of main" << endl; 
    
    return 0;
}
