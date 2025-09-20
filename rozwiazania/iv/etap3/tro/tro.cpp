#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int x,y,z=0,a,b;
    cin>>x>>y;
	vector<int>v(x,0);
    for(int i=0;i<y;i++){
		cin>>a>>b;
		v[a-1]++;
		v[b-1]++;
	}
	for(int i=0;i<x;i++)z+=v[i]*(x-v[i]-1);
	cout<<(x*(x-1)*(x-2)/3-z)/2;
}
