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