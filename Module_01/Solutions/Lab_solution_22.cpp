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
			m_minutes++;
			if(m_minutes == 60){
				m_minutes = 0;
				m_hours++;
			}
			if(m_hours == 24){
				m_hours = 0;
			}
			
			cout << "Time is: " << m_hours << ":" << m_minutes << "\n";
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


