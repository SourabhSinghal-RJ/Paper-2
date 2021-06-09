#include<bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cout<<"Enter a number for the pattern"<<endl;
    cin>>input;
    for(int i=1;i<input+1;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(input-i);j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=input;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(input-i);j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}