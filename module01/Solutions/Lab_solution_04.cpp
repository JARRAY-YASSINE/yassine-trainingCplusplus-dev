#include <iostream>
#include <string>
using namespace std;

class Device
{
    public:
        Device()
        {
            m_model = "INTR-202202";
            m_systemID = 0x200;
            m_isConnected = false;
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
    Device myDevice;

    std::cout << "Device Model: " << myDevice.getModel() << "\n";
    std::cout << "Device System ID: " << myDevice.getSystemID() << "\n";
    std::cout << "Device is connected: " << myDevice.getConnStatus() << "\n";
}