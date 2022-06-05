#include <iostream>

using namespace std;

class Clock
{
	public:
		Clock()
        {
            m_hours = 0;
			m_minutes = 0;
        }

		Clock(int hours, int minutes)
        {
            m_hours = hours;
			m_minutes = minutes;
        }

		Clock operator+(Clock& t2) // Call by reference
		{	
			Clock t3;

			t3.m_hours = this->m_hours + t2.m_hours;
			t3.m_minutes = this->m_minutes + t2.m_minutes;

			if(t3.m_minutes == 60){
				t3.m_minutes = 0;
				t3.m_hours++;
			}

			if(t3.m_hours == 24){
				t3.m_hours = 0;
			}
			
			cout << "Time will be: " << t3.m_hours << ":" << t3.m_minutes << "\n";
			return t3;
		}
	private:
		int m_hours;
		int m_minutes;
};


int main()
{
	Clock timeNow(14,30);
	Clock timeToAdd(0,30);
	Clock timeSched;

	timeSched = timeNow + timeToAdd;

	return 0;
}