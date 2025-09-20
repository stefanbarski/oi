#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int x,y,z,w=0;
    cin>>x;
    stack<int>s;
    for(int i=0;i<x;i++){
        cin>>y>>z;
        while(!s.empty()&&z<s.top()){
            s.pop();
        }
        if(s.empty()||z>s.top()){
            s.push(z);
            w++;
        }
	}
    cout<<w;
}

