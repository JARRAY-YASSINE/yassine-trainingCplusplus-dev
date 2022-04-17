#include <iostream>
#include <string>
using namespace std;

class Device
{
    public:
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
    Lightbulb myLightBulb;
	Thermostat myThermostat;
	Irrigation myIrrigation;

    std::cout << "LightBulb Brightness: " << myLightBulb.getBrightness() << "\n";
    std::cout << "Thermostat Clim State: " << myThermostat.getClimState() << "\n";
    std::cout << "Irrigation Monitor Interval: " << myIrrigation.getMonitorInterval() << "\n";
}