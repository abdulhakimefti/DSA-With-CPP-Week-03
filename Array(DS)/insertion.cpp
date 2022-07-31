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

    // Size-1 --pos
    int pos,value;
    cout<<"Position of the insertation: ";
    cin>>pos;
    cout<<"Value of the insertation: ";
    cin>>value;

    if(pos<0 || pos>size){
        cout<<"Invalid Index"<<endl;
    }
    else{
        // size-1 ---> pos
        // for(int i=size-1;i>=pos;i--){
        //     arr[i+1]=arr[i];
        // }
        

        // Size --> pos (5)--> pos(2)
        arr[size]=arr[pos];
        arr[pos]=value;

    }
    PrintArray(arr,size+1);
    return 0;
};