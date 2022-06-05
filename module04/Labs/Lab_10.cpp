#include <iostream>
 
using namespace std;
 
class Device
{
    public:
        Device() 
        { 
            cout << "Construct (Default) " <<endl;
        }
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

int main()
{
    Device* pDeviceTab = new Device();
    cout << "End of main()" << endl;
    return 0;
}