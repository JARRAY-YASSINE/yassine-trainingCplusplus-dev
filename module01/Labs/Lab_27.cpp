#include <iostream>
#include <string>
using namespace std;

class Lightbulb
{
	public:
		const char* printConnStatus(){
            return (m_isConnected?"Connected":"Not Connected");
        }
    private:
        bool m_isConnected = false;
};

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
        Lightbulb bulb;

    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
};

int main()
{
    Device myDevice;

    std::cout << "LightBulb Status: " << myDevice.bulb.printConnStatus() << "\n";
}