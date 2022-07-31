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
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + m);

    int intersection[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int indexNumber = binarySearch(arr2, arr[i], 0, m - 1);
     
        if (indexNumber != -1)
        {
            intersection[j] = arr2[indexNumber];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        cout<<intersection[i]<<" ";
    }
    cout << endl;

    return 0;
}