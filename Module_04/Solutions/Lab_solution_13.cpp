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

weak_ptr<Device> gDeviceObserver;

void observe()
{
    cout << "Number of shared references = " << gDeviceObserver.use_count() << endl;
    shared_ptr<Device> sPtr = gDeviceObserver.lock();
	if (sPtr) 
	{
    	cout << sPtr.get()->getModel() << "Object is valid " << endl;
    }
    else 
	{
        cout << "Object has expired\n";
    }
} 

int main()
{
    cout << "Begin of main()" << endl;
	{
    	shared_ptr<Device> devicePtr = make_shared<Device>("Device 1");
		gDeviceObserver = devicePtr;
		observe();
	}
	observe();
    
    cout << "End of main()" << endl;
    return 0;
}