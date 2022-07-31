#include<bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[],int n){
      for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
       
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        
        }

        if (flag == 0)
            break;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int fq[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            fq[j]=arr[j];
        }
        bubbleSort(arr,n);
        int index=0;
        for(int j=0;j<n;j++){
           if(arr[0]==arr[j]){
            index++;
           }
           
        }
        cout<<n-index<<endl;
    }

    return 0;
}