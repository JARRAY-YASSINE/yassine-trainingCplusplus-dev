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

class Lightbulb : public Device
{
	public:
		bool getBrightness()
        {
            return m_brightness;
        }
        void setColor(int hexColor) 
        {
            cout << "Lightbulb color is 0x"<< std::hex << hexColor << endl;
        }
        void setColor(int red, int green, int blue) 
        {
            cout << "Lightbulb color is "<< "RGB("<< red <<"," <<green <<"," <<blue << ")" << endl;
        }
        void setColor(int cyan, int magenta, int yellow, int black) 
        {
            cout << "Lightbulb color is "<< "CMYK("<< cyan <<"," <<magenta <<"," <<yellow <<"," <<black << ")" << endl;
        }
	private:
		int m_brightness;
};

int main()
{
    Lightbulb myLightBulb;

    myLightBulb.setColor(0x3DB7E4);
    myLightBulb.setColor(61, 183, 228);
    myLightBulb.setColor(68, 3, 0, 0);
}