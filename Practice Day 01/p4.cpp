#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int max=0,maxIndex;
   int min=arr[0],minIndex;
   for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
        maxIndex=i;
    }
    if(arr[i]<min){
        min = arr[i];
        minIndex=i;
    }
   }
   cout<<"Max: "<<max<<" Index: "<<maxIndex<<endl;
   cout<<"Min "<<min<<" Index: "<<minIndex<<endl;
    return 0;
}