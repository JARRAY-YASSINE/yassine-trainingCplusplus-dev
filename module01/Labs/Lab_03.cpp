#include <iostream>
#include <string>
using namespace std;

class Device
{
  public:

  protected:
      string m_model;
  private:    
      int m_systemID = 0;
      bool m_isConnected = false;
};

int main()
{
  Device myDevice;
  myDevice.m_model = "INTR-202201";
  myDevice.m_systemID = 0x100;
  myDevice.m_isConnected = true;

  std::cout << "Device Model: " << myDevice.m_model << "\n";
  std::cout << "Device System ID: " << myDevice.m_systemID << "\n";
  std::cout << "Device is connected: " << myDevice.m_isConnected << "\n";
}