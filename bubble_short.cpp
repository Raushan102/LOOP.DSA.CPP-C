#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of aarrays";
    cin >> n;
    int  a[n], count, i;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    count = 1;
    while (count < n)
    {
        for ( i = 0; i < n - count; i++)
        {

            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        count++;
    }
    for ( i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}