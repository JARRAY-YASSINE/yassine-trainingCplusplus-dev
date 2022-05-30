#include <iostream>
#include <string>

using namespace std;

class Device
{
    public:
        Device(string model) 
        { 
            cout << "Construct " << model <<endl;
            m_model = model; 
        }
        ~Device(){ cout << "Destruct " << m_model <<endl; }
        std::string getModel() { return m_model; }
        int getSystemID() { return m_systemID; }
        bool getConnStatus() { return m_isConnected; }

        void setModel(std::string const model) { m_model = model; }
        void setSystemID(int systemID) { m_systemID = systemID; }
        void setConnStatus(bool isConnected) { m_isConnected = isConnected; }

    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
        bool m_isConnected = false;
};

void printPointer(string msg, void* p)
{
    if(p)
        cout << msg << " address = 0x"<< std::hex << p << endl;
    else
        cout << msg << " is Null" << endl;
}

int main()
{
    Device device1("device1");
    printPointer("device1", &device1);
    Device* pDevice = new Device("pDevice 1");
    printPointer("pDevice", pDevice);
    Device* pDevice2 = new Device("pDevice 2");
    printPointer("pDevice", pDevice2);
    delete pDevice;
    delete pDevice2;

    cout << "End of main()" << endl;
    return 0;
}