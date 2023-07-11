#include <iostream>
using namespace std;
int ban(int n)
{
    int a[20], i = 0;
    int rem;

    while (n != 0)
    {
        rem = n % 2;
        a[i] = rem;
        n = n / 2;
        i++;
    }
    cout << "\nEquivalent Binary Value: ";
    for (i = i - 1; i >= 0; i--)
        cout << a[i];

    return 0;
}
int main()
{
    int n;
    cout << "Enter the Decimal Number: ";
    cin >> n;
    ban(n);
}