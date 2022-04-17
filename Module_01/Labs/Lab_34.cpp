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
        virtual void printStartupMessage()=0;
    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
};

class Lightbulb : public Device
{
	public:
		bool getBrightness()
        {
            return m_brightness;
        }
	private:
		int m_brightness;
};

class Thermostat : public Device
{
	public:
		bool getClimState()
        {
            return m_climState;
        }
	private:
		bool m_climState;
};

int main()
{
    Lightbulb myLightBulb;
    Thermostat myThermostat;

    myLightBulb.printStartupMessage();
    myThermostat.printStartupMessage();
}