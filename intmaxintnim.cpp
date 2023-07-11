#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int arr[n];

    int maxno = INT_MIN;
    int minno = INT_MAX;
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << "position of arrays is " << i << " ";
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < minno)

        {

            minno = arr[i];
        }
        else if (arr[i] > maxno)
        {

            maxno = arr[i];
        }
    }
    cout << "maximum number in arry" << maxno << endl
         << "minimum number of arry element is" << minno << endl;
                                                                                              
    for (int t = 0; t < n; t++)
    {

       int  po[t]=pow(arr[i], 2);
    }
    for (int k = 1; k < n; k++)
    {

         cout<<pow[k]<<" ";
    }

    return 0;
}
