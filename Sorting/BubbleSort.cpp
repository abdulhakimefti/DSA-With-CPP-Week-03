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
    // Bubble Sort implementation
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        cout << "Iteration No: " << i << endl;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            printArray(arr, size);
        }
        cout << endl;
        if (flag == 0)
            break;
    }

    cout << "After Sort : " << endl;
    printArray(arr, size);

    return 0;
}