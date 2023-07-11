#include <iostream>
using namespace std;

int main()
{
    int arra[3];

    for (int i = 0; i < 3; i++)
    {
        cout << i << "index" << '\n';
        cin >> arra[i];

        for (int j = 1; j <= 10; j++)
        {

            cout << arra[i] << "*" <<j << "=" << arra[i] * j<< '\n';
        }
    }

    return 0;
}