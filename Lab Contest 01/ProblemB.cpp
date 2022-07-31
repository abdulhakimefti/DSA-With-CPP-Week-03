#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int l = 0;
        
        for (int j = 0; j < n; j++)
        {
            bool isGood = false;
            for (int x = j; x < n; x++)
            {
                for (int y= j; y <= x; y++)
                {
                    int bitOR = arr[y] | k;
                    cout<<bitOR<<" ";
                    if (bitOR >= k)
                    {
                        isGood=true;

                    }   
                    else{
                        isGood=false;
                        break;
                    }
                }
                cout<<endl;
                if(isGood==true){
                    l++;
                }
            }
        }

        cout <<l<< endl;
    }
    return 0;
}