#include <iostream>
using namespace std;
int bin(int binary);
int main()
{
    int n;
    cout << "enter binary number";
    cin >> n;
    cout << bin(n) << '\n';

    return 0;
}
int bin(int binary)
{

    int rem;
    int decimal = 0;
    int weight = 1;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * weight;
        binary = binary / 10;
        weight = weight * 2;
    }
    return decimal;
}