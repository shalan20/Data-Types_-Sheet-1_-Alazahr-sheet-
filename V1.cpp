#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n, m;
    char opr;
    cin >> n >> opr >> m;
    switch (opr)
    {
    case '=':
        if (n == m)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    case '>':
        if (n > m)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    case '<':
        if (n < m)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    }
    return 0;
}