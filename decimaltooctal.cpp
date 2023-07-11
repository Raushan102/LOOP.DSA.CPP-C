#include <iostream>
using namespace std;
int bin(int octal); // octal to decimal conversion

int main()
{
    int n;
    cout << "enter decimal number";
    cin >> n;
    cout << "octal numbner \t" << n << "in to decimalis \t" << bin(n) << '\n';

    return 0;
}
int bin(int octal)

{

    int rem;
    int decimal = 0;
    int weight = 1;
    while (octal != 0)

    {
        rem = octal % 10;

        decimal = decimal + rem * weight;
        octal = octal / 10;

        weight = weight * 8;
    }
    return decimal;
}