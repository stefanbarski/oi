#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int x,y=0,z;
	char c='-',w;
    cin>>x;
    for(int i=1;i<x;i++){
		cin>>w;
		if(w!=c){
			c=w;
			cout<<'(';
			y++;
		}
		cout<<'-';
	}
	for(int i=0;i<y;i++)cout<<')';
}
