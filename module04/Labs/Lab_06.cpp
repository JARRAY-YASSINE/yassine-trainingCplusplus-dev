#include <iostream>
 
using namespace std;
 
class Device
{
    public:
        Device() 
        { 
            cout << "Construct " <<endl;
        }
        ~Device(){ cout << "Destruct " <<endl; }
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
    Device* pDeviceTab = new Device[3];
    delete pDeviceTab;
    cout << "End of main()" << endl;
    return 0;
}