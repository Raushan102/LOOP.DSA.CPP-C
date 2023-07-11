#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int c = 0;
    while (c < n)
    {
        for (int k = 0; k < n; k++)
        {

            if (arr[k] > arr[k + 1])
            {
                int temk = arr[k + 1];
                arr[k + 1] = arr[k];
                arr[k] = temk;
            }
        }
        c++;
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}