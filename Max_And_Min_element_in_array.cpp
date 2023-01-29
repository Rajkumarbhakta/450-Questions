#include <bits/stdc++.h>
using namespace std;
// int max_element(int n, int arr[])
// {
//     int maximum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             if (arr[i] > maximum)
//             {
//                 maximum = arr[i];
//             }
//         }
//     }
//     return maximum;
// }
// int min_element(int n, int arr[])
// {
//     int minimum = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             if (arr[i] < minimum)
//             {
//                 minimum = arr[i];
//             }
//         }
//     }
//     return minimum;
// }
int main()
{
    int n;
    cout << "Enter the array size:";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    // cout << "Minimum element of the array is:" << min_element(n, arr) << endl;
    // cout << "Maximum element of the array is:" << max_element(n, arr) << endl;
    cout << "Minimum element of the array is:" << arr[0] << endl;
    cout << "Maximum element of the array is:" << arr[n - 1] << endl;
    return 0;
}