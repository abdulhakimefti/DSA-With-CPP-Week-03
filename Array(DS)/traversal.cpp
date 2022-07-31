#include<bits/stdc++.h>
using namespace std;


    void PrintArray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    int arr[50];
    int size ;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Giver Array : "<<endl;
    PrintArray(arr,size);
    return 0;
};