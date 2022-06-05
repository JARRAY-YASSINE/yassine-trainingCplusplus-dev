#include <iostream>
#include <string>
using namespace std;

enum DeviceType {
    DeviceType_Unknown = 0,
    DeviceType_Lightbulb,
    DeviceType_Thermostat,  
    DeviceType_Irrigation    
};

class Device
{
    public:
        Device(string model, int systemID, DeviceType deviceType)
        {
            m_model = model;
            m_systemID = systemID;
            m_deviceType = deviceType;
        }
        std::string getModel()
        {
            return m_model;
        }

        int getSystemID()
        {
            return m_systemID;
        }

		string getDeviceType()
        {
            switch(m_deviceType)
            {
                case DeviceType_Lightbulb:
                    return "Lightbulb";
                case DeviceType_Thermostat:
                    return "Thermostat";
                case DeviceType_Irrigation:
                    return "Irrigation";
                case DeviceType_Unknown :
                default:
                    return "Unknown";
            }
        }

        void setModel(std::string const model) { m_model = model; }
        void setSystemID(int systemID) { m_systemID = systemID; }
        virtual void  printStartupMessage()
        {
            cout << "Device has started" << endl;
        }
    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;   
        DeviceType m_deviceType = DeviceType_Unknown;
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
        Lightbulb(string model, int systemID, DeviceType deviceType): Device(model, systemID, deviceType)
        {
            setConnStatus(false);
        }
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
        Thermostat(string model, int systemID, DeviceType deviceType): Device(model, systemID, deviceType)
        {
            setConnStatus(false);
        }
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
        Irrigation(string model, int systemID, DeviceType deviceType): Device(model, systemID, deviceType)
        {
            setConnStatus(false);
        }
		bool getMonitorInterval()
        {
            return m_monitorInterval;
        }
	private:
		bool m_monitorInterval;
};

int main()
{
    Lightbulb* myLightbulb = new Lightbulb("LB-202205",0x100, DeviceType_Lightbulb);
    Thermostat* myThermostat = new Thermostat("TM-202205",0x300, DeviceType_Thermostat);
    Irrigation* myIrrigation = new Irrigation("IR-202205",0x500, DeviceType_Irrigation);
    Device* myDevice = new Device("IR-202205",0x500, DeviceType_Irrigation);

    Lightbulb* copyLightbulb = dynamic_cast<Lightbulb*>(myLightbulb);
    if (copyLightbulb)
        cout << "LightBulb : " << copyLightbulb->getModel() <<"\n";

    Device* device = dynamic_cast<Device*>(myLightbulb);
    if (device)
        cout << "Device : " << device->getModel() <<"\n";
    else   
        cout << "cast failed : "<<"\n";

    //Device not polymorphic
    Thermostat* copyThermostat = dynamic_cast<Thermostat*>(myDevice);
    if (copyThermostat)
        cout << "Device : " << copyThermostat->getModel() <<"\n";
    else   
        cout << "cast failed "<<"\n";

    
}