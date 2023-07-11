#include <bits/stdc++.h>
using namespace std;
int bin(string hexa);

int main()
{
    string hexa;
    cout << "enter hexa numbner";
    cin >> hexa;
    cout << bin(hexa);
    return 0;
}

int bin(string hexa)
{

    int decimal = 0;
    int weight = 1;

    int s = hexa.size();
    for (int i = s - 1; i >= 0; i--)
    {

        if (hexa[i] >= '0' && hexa[i] <= '9')
        {

            decimal = decimal + weight * (hexa[i] - '0');
        }

        else if (hexa[i] > 'A' && hexa[i] <= 'F')
        {
            decimal = decimal + weight * (hexa[i] - 'A' + 10);
        }

        weight = weight * 16;
    }

    return decimal;
}