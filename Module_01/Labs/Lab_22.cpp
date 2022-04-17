#include <iostream>

using namespace std;

class Clock
{
	public:
		Clock(int hours, int minutes)
        {
            m_hours = hours;
			m_minutes = minutes;
        }
		void operator+()
		{	

		}
	private:
		int m_hours;
		int m_minutes;
};


int main()
{
	Clock myClock(14,30);
	+myClock;
	return 0;
}


