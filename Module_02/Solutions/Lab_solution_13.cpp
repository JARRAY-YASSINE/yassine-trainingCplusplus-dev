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

int main()
{
    try
    {
        Device myDevice1("Device 1", 0x264); 
    }
    catch (exception& e)
    {
        cout << "In catch: exception: " << e.what() << endl;
    }
    cout << "After try/catch block main()" << endl; 
    cout << "End of main" << endl; 
    
    return 0;
}