#include <iostream>

class A {
	int a;

public:
	A() { a = 0; }
};

void showA(A& x)
{
	std::cout << "A::a=" << x.a;
}

int main()
{
	A a;
	showA(a);
	return 0;
}
