#include <iostream>

using namespace std;

class Clock
{
	public:
		Clock()
        {
			cout<< "Constructor is called\n" ;
            m_hours = 0;
			m_minutes = 0;
        }

		Clock(int hours, int minutes)
        {
            m_hours = hours;
			m_minutes = minutes;
        }

		void setHours(int hours)
        {
            m_hours = hours;
        }

		void setMinutes(int minutes)
        {
			m_minutes = minutes;
        }
		void display()
        {
        	cout << "Time is: " << m_hours << ":" << m_minutes << "\n";
        }

	private:
		int m_hours;
		int m_minutes;
};

// Overloading the ostream operator '<<'
// to print the complete linked list from
// beginning
ostream& operator<<(ostream& os, Clock* clock)
{
	clock->display();
	return os;
}

// Overloading the istream operator '>>'
// to take continuous input into the linked
// list until user inputs -1
istream& operator>>(istream& is, Clock*& clock)
{
	int hours, minutes; 
	cin >> hours;
	cin >> minutes;
	clock = new Clock(hours, minutes);
	return is;
}

int main()
{
	Clock* myClock = nullptr;

	// Overloading of '>>'
	cin >> myClock;

	// Overloading of '<<'
	cout << myClock;
	return 0;
}