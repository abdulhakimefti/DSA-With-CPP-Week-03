#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        // MID
        if (arr[mid] == x)
            return mid;
        // x>arr[mid] -> right
        else if (arr[mid] < x)
        {
            binarySearch(arr, x, mid + 1, ub);
        }
        // x<arr[mid] -> left
        else
        {
            binarySearch(arr, x, lb, mid - 1);
        }
    }
    else
        return -1;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    char c;
    cout << "Do you want to search: (Y/N) ";
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int checkValue;
        cout << "Please enter the value you want to search : ";
        cin >> checkValue;
        int indexNumber;
        indexNumber = binarySearch(arr, checkValue, 0, size - 1);
        if (indexNumber != -1)
        {
            cout << "Index no " << indexNumber << ", Position Number " << indexNumber + 1 << endl;
        }
        else
        {

            cout << "NOT FOUND" << endl;
        }
        cout << "Do you want to continue searching: (Y/N) ";
        cin >> c;
    }

    return 0;
}