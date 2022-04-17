#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Client
{
    public:
        Client()
        {

        }

        Client(string ipAddress, int homeIndex, const char* digest)
        {

        }

        Client(const Client& client)
        {

        }
        
        
        Client& operator=(const Client& client)
        {

            return *this;
        }

        std::string getIpAddress()
        {

        }

        int getHomeIndex()
        {

        }

        const char* getDigest()
        {

        }

        void setIpAddress(std::string const ipAddress) {  }
        void setHomeIndex(int homeIndex) {  }
        void setDigest(const char* digest)
        {

        }

        ~Client()
        {

        }

    private:    

};

int main()
{
    Client c1("192.168.1.20", 0, "dcd98b7102dd2f0e8b11d0f600bfb0c093");
    Client c2("192.168.1.22", 4, "5ccc069c403ebaf9f0171e9517f40e41");
    Client c3("192.168.1.25", 20, "6629fae49393a05397450978507c4ef1");

    cout << c1.getIpAddress() << " " << c1.getHomeIndex() << " " << c1.getDigest() << endl;
    cout << c2.getIpAddress() << " " << c2.getHomeIndex() << " " << c2.getDigest() << endl;
    cout << c3.getIpAddress() << " " << c3.getHomeIndex() << " " << c3.getDigest() << endl;

    Client c4 = c1;

    c2 = c4;

    cout <<"\n"<< c1.getIpAddress() << " " << c1.getHomeIndex() << " " << c1.getDigest() << endl;
    cout << c2.getIpAddress() << " " << c2.getHomeIndex() << " " << c2.getDigest() << endl;
    cout << c3.getIpAddress() << " " << c3.getHomeIndex() << " " << c3.getDigest() << endl;
    cout << c4.getIpAddress() << " " << c4.getHomeIndex() << " " << c4.getDigest() << endl;

    return 0;
}