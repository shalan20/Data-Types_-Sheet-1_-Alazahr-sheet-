#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int m = n;
    double result = n - m;
    if (result != 0)
        cout << "float " << m << " " << result;
    else
        cout << "int " << m;

    return 0;
}