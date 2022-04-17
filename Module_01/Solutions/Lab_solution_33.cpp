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
        virtual void  printStartupMessage()
        {
            cout << "Device has started" << endl;
        }
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
        void printStartupMessage() override
        {
            cout << "Lightbulb has started" << endl;
        }
	private:
		int m_brightness;
};

int main()
{
    Lightbulb myLightBulb;

    myLightBulb.printStartupMessage();
}