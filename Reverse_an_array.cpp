#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    cout << "enter the array size :";
    int n;
    cin >> n;

    cout << "enter array elements:";
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int strat = 0;
    int end = n-1;

    while (strat <= end)
    {
        swap(&arr[strat], &arr[end]);
        strat++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    // int i = 0, j = n - 1, temp;

    /* for ( i = 0, j = n - 1; i < n/2; i++, j--)
       {
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }*/
    // while (i < n / 2)
    // {
    //     int st;
    //     st = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = st;
    //     i++;
    //     j--;
    // }

    // cout << "output:";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
