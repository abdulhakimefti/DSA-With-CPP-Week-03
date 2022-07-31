#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    string m;
    for(int j=0, i=2;0<=i;i--,j++){
        m[j]=n[i];
    }
    if(m[0]==n[0]&&m[1]==n[1]&&m[2]==n[2]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}