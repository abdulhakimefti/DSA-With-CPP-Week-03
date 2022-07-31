#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cout<<"Case "<<i<<":"<<"\n";
        for(int j=0;j<q;j++){
            int m,n;
            cin>>m>>n;
            m--;
            n--;
            int min=arr[m];
            while(m<=n){
                if(min>arr[m]){
                    min = arr[m];
                }
                m++;
            }
            cout<<min<<"\n";
        }
    }
    return 0;
}