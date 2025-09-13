#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int x,y,w=0;
	cin>>x;
	vector<int>v(x);
    for(int i=0;i<x;i++)cin>>v[i];
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(int i=0;i<x/2;i++)w+=2*v[i];
	w+=x%2?v[x/2]:0;
	cout<<w;
}

