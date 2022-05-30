#include <iostream>
#include <string>

using namespace std;

class Device
{
    public:
        Device(string model) 
        { 
            cout << "Construct " << model <<endl;
            m_model = model; 
        }
        ~Device(){ cout << "Destruct " << m_model <<endl; }
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

Device gDevice("Global Variable");

void f()
{
    cout << "--- Starting f()" << endl;
    Device Device1("Device f()");
    cout << "--- End of f()" << endl;
}

int main()
{
    cout << "--- Starting main()" << endl;
    static Device sDevice("Static Variable");
    Device Device1("Device main scope");
    cout << "--- Starting scope {}" << endl;
    {
        Device Device1("Device scope {}");
    }
    cout << "--- End of scope {}" << endl;
    f();
    cout << "--- End of main()" << endl;
    return 0;
}