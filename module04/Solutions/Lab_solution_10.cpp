#include <iostream>
#include <memory>

using namespace std;


class Config
{
    public:
        Config() 
        { 
            cout << "Config Construct (Default) " <<endl;
        }
        Config(int port) 
        { 
            cout << "Config Construct " << port <<endl;
            m_port = port; 
        }
        ~Config(){ cout << "Config Destruct " << m_port <<endl; }
    private:    
        int m_port = 0;
};

class Device
{
    public:
        Device(): ConfigPtr(make_unique<Config>())
        { 
            cout << "Device Construct (Default) " <<endl;
        }
        Device(string model): ConfigPtr(make_unique<Config>())
        { 
            cout << "Device Construct " << model <<endl;
            m_model = model; 
        }
        ~Device(){ cout << "Device Destruct " << m_model <<endl; }
        std::string getModel() { return m_model; }
        int getSystemID() { return m_systemID; }
        bool getConnStatus() { return m_isConnected; }

        void setModel(std::string const model) { m_model = model; }
        void setSystemID(int systemID) { m_systemID = systemID; }
        void setConnStatus(bool isConnected) { m_isConnected = isConnected; }

    protected:
        std::string m_model;
    private:    
        int m_systemID = 0;
        bool m_isConnected = false;
        unique_ptr<Config> ConfigPtr;
};

unique_ptr<Device> getDevicePtr()
{
    return make_unique<Device>();
}

int main()
{
    cout << "Begin of main()" << endl;
    cout << "devicePtr1 :" << endl;
    unique_ptr<Device> devicePtr1(new Device);
    cout << "devicePtr2 :" << endl;
    unique_ptr<Device> devicePtr2;
    devicePtr2.reset(new Device("Device 2"));
    cout << "devicePtrTab :" << endl;
    unique_ptr<Device[]> devicePtrTab(new Device[4]);
    cout << "devicePtr3 :" << endl;
    unique_ptr<Device> devicePtr3;

    cout << "devicePtr2 =>" << devicePtr2.get() << 
            " - devicePtr3 =>" << devicePtr3.get() << endl;

    devicePtr3.reset(devicePtr2.release());
    cout << "After reset: devicePtr2 =>" << devicePtr2.get() << 
            " - devicePtr3 =>" << devicePtr3.get() << endl;

    devicePtr2 = move(devicePtr3);
    cout << "After move: devicePtr2 =>" << devicePtr2.get() << 
            " - devicePtr3 =>" << devicePtr3.get() << endl;

    cout << "devicePtr4 :" << endl;
    unique_ptr<Device> devicePtr4 = getDevicePtr();
    
    cout << "End of main()" << endl;
    return 0;
}