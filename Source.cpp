#include <iostream>

using namespace std;

void Skaiciu_Seka(int & a, int & b, int & n);
void At_Skaiciu_Seka(int a, int b, int n);

int main()
{
	int a = 1, b = 1, n;
	
	Skaiciu_Seka(a, b, n);
	At_Skaiciu_Seka(a, b, n);

	return 0;
}

void Skaiciu_Seka(int & a, int & b, int & n)
{
	int c;

	cin >> n;
	cout << endl;
	
	cout << a << endl;
	for (int i = 1; i < n; i++)
	{
		cout << b << endl;
		c = a;
		a = b;
		b = a + c;
	}
}

void At_Skaiciu_Seka(int a, int b, int n)
{
	int c;
	
	cout << "----------" << endl;
	
	for (int i = 0; i < n; i++)
	{
		c = a;
		a = b - a;
		b = c;
		cout << b << endl;
	}
}