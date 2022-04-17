#include <iostream>
#include <string>

class DeviceClass
{
    int systemID = 0;
    bool isConnected = false;

    std::string TestString()
    {
        return "Hello World!";
    }
};

int main()
{
    DeviceClass myDeviceClassObject;
}