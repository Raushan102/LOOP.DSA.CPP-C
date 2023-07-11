#include <iostream>
using namespace std;
int bin(int n)
{

    int a[20];
    int i = 0;
    while (n > 0)
    {

        a[i] = n % 2;

        n = n / 2;

        i++;
    }
    cout << "enter number is equal to binary number is ";
    for (int j = i - 1; j >= 0; j--)
    {

        cout << a[j];
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    bin(n);
    return 0;
}