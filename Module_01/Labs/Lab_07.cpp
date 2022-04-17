#include <iostream>
#include <string>
using namespace std;

class Device
{
    public:
        Device(std::string const model, int systemID, bool isConnected = false)
        {
            m_model = model;
            m_systemID = systemID;
            m_isConnected = isConnected;
        }

        std::string getModel()
        {
            return m_model;
        }

        int getSystemID()
        {
            return m_systemID;
        }

        bool getConnStatus()
        {
            return m_isConnected;
        }

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

    std::cout << "Device 1 Model: " << myDevice1.getModel() << "\n";
    std::cout << "Device 1 System ID: " << myDevice1.getSystemID() << "\n";
    std::cout << "Device 1 is connected: " << myDevice1.getConnStatus() << "\n";


    std::cout << "Device 2 Model: " << myDevice2.getModel() << "\n";
    std::cout << "Device 2 System ID: " << myDevice2.getSystemID() << "\n";
    std::cout << "Device 2 is connected: " << myDevice2.getConnStatus() << "\n";
}