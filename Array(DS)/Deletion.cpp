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
    cout<<"Position of the deletion: ";
    cin>>pos;
    cout<<"Value of the deletion: ";
    cin>>value;

    if(pos<0 || pos>size-1){
        cout<<"Invalid Index"<<endl;
    }
    else{
      //Deletion 
      if(pos==size-1)size--;
      else{
        for(int i =pos+1;i<size;i++){
            arr[i-1]=arr[i];
        }
        size--;
      }

    }
    PrintArray(arr,size);
    return 0;
};