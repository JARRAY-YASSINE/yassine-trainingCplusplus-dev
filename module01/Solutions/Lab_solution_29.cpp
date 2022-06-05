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
    Lightbulb myLightBulb;
	Thermostat myThermostat;
	Irrigation myIrrigation;

    myLightBulb.init();
    myThermostat.init();
    myIrrigation.init();

    std::cout << "LightBulb Connection status: " << myLightBulb.getConnStatus() << "\n";
    std::cout << "Thermostat Connection status: " << myThermostat.getConnStatus() << "\n";
    std::cout << "Irrigation Connection status: " << myIrrigation.getConnStatus() << "\n";
    myLightBulb.connect();
    std::cout << "LightBulb Connection status: " << myLightBulb.getConnStatus() << "\n";
    std::cout << "Thermostat Connection status: " << myThermostat.getConnStatus() << "\n";
    std::cout << "Irrigation Connection status: " << myIrrigation.getConnStatus() << "\n";

    myThermostat.shutdown();
    myIrrigation.shutdown();
}