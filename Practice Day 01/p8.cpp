#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=n;

    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}