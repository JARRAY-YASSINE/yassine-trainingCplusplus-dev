#include <iostream>
#include <memory>
 
using namespace std;

class Company
{
	std::string m_name;
	std::shared_ptr<Company> m_partner; // initially created empty

public:
	Company(const std::string &name): m_name(name)
	{
		cout << "Company Construct " << m_name <<endl;
	}
	~Company()
	{
		cout << "Company Destruct " << m_name <<endl;
	}
   
    bool setPartner(std::shared_ptr<Company> &c)
    {
	    if (!c)
			return false;

		m_partner = c;

		std::cout << m_name << " is now partnered with " << c->m_name << "\n";

		return true;        
    }
};


int main()
{
    cout << "Begin of main()" << endl;
    shared_ptr<Company> companyPtr1 = make_shared<Company>("Amazon");
    shared_ptr<Company> companyPtr2 = make_shared<Company>("Google");

    companyPtr1.get()->setPartner(companyPtr2);
    companyPtr2.get()->setPartner(companyPtr1);

    cout << "End of main()" << endl;
	return 0;
}