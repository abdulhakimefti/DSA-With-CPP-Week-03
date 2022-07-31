#include<bits/stdc++.h>
using namespace std;

int prefix(int pre[],int arr[],int n){
     pre[0]=arr[0];
        for(int j=1;j<n;j++){
            pre[j]=arr[j]+pre[j-1];
        }
        
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,q;
        cin>>n>>q;
        int arr[n];
         int pre[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
       
        prefix(pre,arr,n);
        cout<<"Case "<<i+1<<":"<<endl;

        for(int j=0;j<q;j++){
            int type;
            cin>>type;
            if(type==1){
                int idx;
                cin>>idx;
                cout<<arr[idx]<<endl;
                arr[idx]=0;
                prefix(pre,arr,n);
            }
            else if(type==2){
                int idx,value;
                cin>>idx>>value;
                arr[idx]=arr[idx]+value;
                prefix(pre,arr,n);
            }
            else if(type==3){
                int idx1,idx2;
                cin>>idx1>>idx2;
                 int total;
                if(idx1==0){
                    total=pre[idx2];
                }
                else{
                    total = pre[idx2]-pre[idx1-1];
                }
                
                cout<<total<<endl;
            }
        }
    }
    return 0;
}