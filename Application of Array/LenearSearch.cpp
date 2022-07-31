#include <bits/stdc++.h>
using namespace std;

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
        int flag = 0;
        cout << "Please enter the value you want to search: \a";
        cin >> checkValue;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == checkValue)
            {
                cout << "Index no " << i << ", Position " << i + 1 << endl;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "Not Found" << endl;
        }

        cout<<"Do you want to continue searching: (Y/N) ";
        cin>>c;
    }

    return 0;
}