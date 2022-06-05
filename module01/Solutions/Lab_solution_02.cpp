#include <iostream>
#include <string>

class DeviceClass
{
    public:
        int m_systemID = 0x100;
        bool m_isConnected = false;

        std::string TestString()
        {
            return "Hello World!";
        }
};

struct DeviceSturct
{
    int systemID = 0x100;
    bool isConnected = false;

    std::string TestString()
    {
        return "Hello World!";
    }
};

int main()
{
    DeviceClass myDeviceClassObject;
    std::cout << "myDeviceClassObject::systemID: " << myDeviceClassObject.m_systemID << "\n";
    std::cout << "myDeviceClassObject::isConnected: " << myDeviceClassObject.m_isConnected << "\n";
    std::cout << "myDeviceClassObject::TestString: " << myDeviceClassObject.TestString() <<"\n";
    DeviceSturct myDeviceStructObject;
    std::cout << "\nmyDeviceStructObject::systemID: " << myDeviceStructObject.systemID << "\n";
    std::cout << "myDeviceStructObject::isConnected: " << myDeviceStructObject.isConnected << "\n";
    std::cout << "myDeviceStructObject::TestString: " << myDeviceStructObject.TestString() <<"\n";
}