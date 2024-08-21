#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, d;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
        d = a + b;
    else if (s == '-')
        d = a - b;
    else
        d = a * b;
    if (c == d)
        cout << "Yes" << endl;
    else
        cout << d;



    return 0;
}