#include <iostream>
#include <memory>
 
using namespace std;

class Device
{
    public:
        Device()
        { 
            cout << "Device Construct (Default) " <<endl;
        }
        Device(string model)
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
};

int main()
{
    cout << "Begin of main()" << endl;
    shared_ptr<Device> devicePtr;
    devicePtr.reset(new Device("Device 1"));
    cout << "Device Connection Status:" << devicePtr.get()->getConnStatus() << endl;

    shared_ptr<Device> devicePtr2 = make_shared<Device>("Device 2");
    shared_ptr<Device> devicePtr3 = devicePtr2;
    cout << "Use count:" << devicePtr2.use_count() << endl;

    devicePtr3.reset();
    cout << "Use count:" << devicePtr2.use_count() << endl;

    cout << "End of main()" << endl;
    return 0;
}