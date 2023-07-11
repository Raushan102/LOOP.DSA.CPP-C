#include <iostream>
using namespace std;
int fact(int num);
int main()
{
    int n, r;
    int ans;
    cout << "enter n";
    cin >> n;
    cout << "enter r";
    cin >> r;
    ans = fact(n) / (fact(n - r) * fact(r));

    cout << "combination of number" << ans;

    return 0;
}
int fact(int num)
{
    int facturial = 1;
    for (int i = 1; i <= num; i++)
    {
        facturial = facturial * i;
    }
    return facturial;
}