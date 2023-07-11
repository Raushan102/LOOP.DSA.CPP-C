#include <iostream>
using namespace std;
int binarysearch(int arry[], int k, int n)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arry[mid] == k)
        {
            return mid;
        }
        else if (arry[mid] > k)
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    int arry[n];
    cout << "inter size of array";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    cout << "enter key ";
    cin >> k;
    cout << binarysearch(arry, k, n) << endl;

    return 0;
}