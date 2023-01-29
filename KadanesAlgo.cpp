#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>a)
{
    int currentSum = 0;
    int maxSum=a[0];

    for(int i=0;i<a.size();i++)
    {
        currentSum+=a[i];
        if(currentSum>maxSum)
        {
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }

    return maxSum;
}


int main()
{
    int n;
    cin>>n;
    vector<int>arr;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<maxSubarraySum(arr);

}