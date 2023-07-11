#include <iostream>
using namespace std;

int main()
{
    int star[10];
    int avg, sume=0;

    for (int i = 0; i < 10; i++)
    {
        cout << i << "index=" << '\n';
        cin >> star[i];

        sume = sume + star[i];

        avg = sume / 10;
    }

    cout << "sume" << sume << '\n';
    cout << "everage=" << avg << '\n';

    return 0;
}