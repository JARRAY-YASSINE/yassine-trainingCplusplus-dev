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

        void setModel(std::string const model) { m_model = model; }
        void setSystemID(int systemID) { m_systemID = systemID; }

    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
};

class Client
{
	public:
		void init()
        {
            cout << "Init Client" << "\n";
        }

		void connect()
        {
            cout << "Connect Client" << "\n";
            m_isConnected = true;
        }

		void shutdown()
        {
            cout << "Shutdown Client" << "\n";
            m_isConnected = false;
        }

        bool getConnStatus()
        {
            return m_isConnected;
        }
        void setConnStatus(bool isConnected) { m_isConnected = isConnected; }
	private:
        bool m_isConnected = false;
};

class Lightbulb : public Device, public Client
{
	public:
		bool getBrightness()
        {
            return m_brightness;
        }
	private:
		int m_brightness;
};

class Thermostat : public Device, public Client
{
	public:
		bool getClimState()
        {
            return m_climState;
        }
	private:
		bool m_climState;
};

class Irrigation : public Device, public Client
{
	public:
		bool getMonitorInterval()
        {
            return m_monitorInterval;
        }
	private:
		bool m_monitorInterval;
};

int main()
{
    // Device** devices = new Device*[3];
    Device* devices[3];

    for(int i=0; i<3; i++)
    {
        devices[i] = new Device();
    }

    Lightbulb* myLightbulb = static_cast<Lightbulb*>(devices[0]);
    Thermostat* myThermostat = static_cast<Thermostat*>(devices[1]);
    Irrigation* myIrrigation = static_cast<Irrigation*>(devices[2]);
    
    std::cout << "LightBulb Brightness: " << myLightbulb->getBrightness() << "\n";
    std::cout << "Thermostat Clim State: " << myThermostat->getClimState() << "\n";
    std::cout << "Irrigation Monitor Interval: " << myIrrigation->getMonitorInterval() << "\n";

    static_cast<Client*>(myLightbulb)->connect();
    static_cast<Client*>(myThermostat)->connect();
    static_cast<Client*>(myIrrigation)->connect();
}