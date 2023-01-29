#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size:";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    int k_max, k_min;
    cout << "Enter K for Maximum number:";
    cin >> k_max;
    cout << "Enter K for Minimum number:";
    cin >> k_min;

    cout << "Kth Maximum element in the array is: " << arr[(n - k_max) - 1] << endl;
    cout << "Kth Minimum element in the array is: " << arr[k_min - 1];

    return 0;
}
