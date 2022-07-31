#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "Before Sort : " << endl;

    printArray(arr, size);
    cout << endl;
    // Insertion Sort implemantation

    for (int i = 1; i < size - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] > key && 0 <= j)
        {
            arr[j + 1] = arr[j];
            // printArray(arr, size);
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "After Sort : " << endl;
    printArray(arr, size);
    return 0;
}