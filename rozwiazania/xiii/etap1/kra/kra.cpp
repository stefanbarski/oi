#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int x,y,z,b;
    cin>>x>>y>>z;
	vector<int>v(x);
	v[0]=z;
    for(int i=1;i<x;i++){
		cin>>z;
		v[i]=min(z,v[i-1]);
	}
	x--;
	for(int i=0;i<y;i++){
		cin>>z;
		while(x&&v[x]<z){
			x--;
		}
		x--;
	}
	cout<<max(x+2,0);
}

