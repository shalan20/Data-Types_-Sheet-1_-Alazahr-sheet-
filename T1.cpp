#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int m, mi, d;
	if (a >= b && a >= c)
	{
		m = a;
		if (b >= c)
		{
			d = b;
			mi = c;
		}
		else
		{
			d = c;
			mi = b;
		}
	}
	else if (b >= a && b >= c)
	{
		m = b;
		if (a >= c)
		{
			d = a;
			mi = c;
		}
		else
		{
			d = c;
			mi = a;
		}
	}
	else
	{
		m = c;
		if (a >= b)
		{
			d = a;
			mi = b;
		}
		else
		{
			d = b;
			mi = a;
		}
	}

	cout << mi << endl << d << endl << m << endl << endl;

	cout << a << endl << b << endl << c << endl;


}