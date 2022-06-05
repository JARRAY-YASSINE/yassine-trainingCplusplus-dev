#include <cstdlib>
#include <iostream>

using namespace std;

// A class to represent an integer array
class Array {
private:
	int* m_ptr;
	int m_size;

public:
	Array(int* ptr, int size)
	{
		m_size = size;
		m_ptr = NULL;
		if (size != 0) {
			m_ptr = new int[size];
			for (int i = 0; i < size; i++)
				m_ptr[i] = ptr[i];
		}
	}

	// Implementation of [] operator. This function must return a
	// reference as array element can be put on left side
	int& operator[](int index)
	{

	}
};

int main()
{
	int a[] = { 1, 2, 4, 5 };
	Array arr(a, 4);
	arr[2] = 6;
	cout << "arr[2] =" << arr[2] << "\n";
	cout << "arr[8] = " << arr[8] << "\n";
	cout << "arr[-2] = " << arr[-2] << "\n";
	return 0;
}
