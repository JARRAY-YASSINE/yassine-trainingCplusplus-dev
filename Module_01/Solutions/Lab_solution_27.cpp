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
        const char* printConnStatus(){
            return (m_isConnected?"Connected":"Not Connected");
        }

    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
        bool m_isConnected = false;
};

class Lightbulb : public Device
{
	public:
		
    private:
};

int main()
{
    Lightbulb myDevice;

    std::cout << "LightBulb Status: " << myDevice.printConnStatus() << "\n";
}