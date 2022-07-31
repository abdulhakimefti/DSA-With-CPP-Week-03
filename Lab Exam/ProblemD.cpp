#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
         
        for(int j=0;j<n;j++){        
            cin>>arr[j];
           
        }
      
        int time=0;
        for(int j=0;j<n;j++){
            int somoi=1;
            for(int k=0;k<n;k++){
                if(arr[j]==arr[k]&&j!=k&&arr[k]!=-1){
                   somoi++;
                    arr[k]=-1;
                }
            }
            if(somoi>time){
                time=somoi;
            }
        }
        cout<<n-time<<endl;
    }

    return 0;
}