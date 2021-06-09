#include <bits/stdc++.h>
using namespace std;

int main() {
    int count;
    vector<int> v;
    cout<<"Enter number of elements"<<endl;
    cin>>count;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<count;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> v1(count,-1);
    stack<int> s;
    s.push(0);
    for(int i=1;i<count;i++){
        while(!s.empty() && v[i]>v[s.top()]){
            v1[s.top()]=1;
            s.pop();
        }
        s.push(i);
    }
    cout<<"Leaders are- ";
    for(int i=0;i<count;i++){
        if(v1[i]==-1){
            cout<<v[i]<<" ";
        }
    }
	return 0;
}
