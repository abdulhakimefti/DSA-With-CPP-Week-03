#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            binarySearch(arr, x, mid + 1, ub);
        }
        else
        {
            binarySearch(arr, x, lb, mid - 1);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int checkValue;
    cin>>checkValue;
    for(int i=0;i<n;i++){
        if(arr[i]==checkValue){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}