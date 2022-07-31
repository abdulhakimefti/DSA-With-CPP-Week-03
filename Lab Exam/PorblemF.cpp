#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int counter =3;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i]==arr[j]&&i!=j&&arr[j]!=-1){
                counter--;
                arr[j]=-1;
            }   
        }
    }
    cout<<counter<<endl;
    return 0;
}