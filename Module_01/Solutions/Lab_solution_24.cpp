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

		void display()
        {
        	cout << "Time is: " << m_hours << ":" << m_minutes << "\n";
        }

		void * operator new(size_t size)
		{
			cout<< "Overloading new operator with size: " << size << endl;
			void * p = ::operator new(size);
			//void * p = malloc(size); will also work fine
		
			return p;
		}

		void operator delete(void * p)
		{
			cout<< "Overloading delete operator " << endl;
			free(p);
		}
	private:
		int m_hours;
		int m_minutes;
};


int main()
{
	Clock* myClock = new Clock(14,30);

	myClock->display();
	delete myClock;
	return 0;
}