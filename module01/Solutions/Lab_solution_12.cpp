#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Client
{
    public:
        Client()
        {
            m_ipAddress = "0.0.0.0";
            m_homeIndex = 0;
            m_digestSize = 0;
            m_digest = 0;
        }

        Client(string ipAddress, int homeIndex, const char* digest)
        {
            m_ipAddress = ipAddress;
            m_homeIndex = homeIndex;
            m_digestSize = strlen(digest);
            m_digest = new char[m_digestSize + 1];
            strcpy(m_digest, digest);
        }

        Client(const Client& client)
        {
            m_ipAddress = client.m_ipAddress;
            m_homeIndex = client.m_homeIndex;
            m_digestSize = strlen(client.m_digest);
            m_digest = new char[m_digestSize + 1];
            strcpy(m_digest, client.m_digest);
        }
        
        
        Client& operator=(const Client& client)
        {
            // check for self assignment
            if (this != & client) 
            {
                m_ipAddress = client.m_ipAddress;
                m_homeIndex = client.m_homeIndex;
                // Since this is an already existing object we must deallocate existing memory
                delete[] m_digest;
                m_digestSize = strlen(client.m_digest);
                m_digest = new char[m_digestSize + 1];
                strcpy(m_digest, client.m_digest);
            }
            return *this;
        }

        std::string getIpAddress()
        {
            return m_ipAddress;
        }

        int getHomeIndex()
        {
            return m_homeIndex;
        }

        const char* getDigest()
        {
            return m_digest;
        }

        void setIpAddress(std::string const ipAddress) { m_ipAddress = ipAddress; }
        void setHomeIndex(int homeIndex) { m_homeIndex = homeIndex; }
        void setDigest(const char* digest)
        {
            delete[] m_digest;
            m_digestSize = strlen(digest);
            m_digest = new char[m_digestSize + 1];
            strcpy(m_digest, digest);
        }

        ~Client()
        {
            delete[] m_digest;
        }

    private:    
        int m_homeIndex = 0;
        std::string m_ipAddress;
        int m_digestSize;
        char* m_digest;
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