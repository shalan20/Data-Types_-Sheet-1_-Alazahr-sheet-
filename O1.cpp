#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    char x;
    cin >> a >> x >> b;
    if (x == '+')
        cout << a + b;
    else if (x == '-')
        cout << a - b;
    else if (x == '*')
        cout << a * b;
    else if (x == '/')
        cout << a / b;

    return 0;

}