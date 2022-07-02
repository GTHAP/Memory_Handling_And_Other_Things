//Factorial - 5! = 5 * 4 * 3 * 2 * 1

#include<iostream>

using namespace std;

int factorial(int x)
{
	int y = 1;
	int r = x;

	while (y < x)
	{
		r = r * y;
		y++;
	}
	return r;
}

int main()
{
	int x = 0;
	cout << "Enter a number: ";
	cin >> x;

	cout << factorial(x) << endl;
}