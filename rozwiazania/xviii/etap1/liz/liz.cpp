#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
	char c;
    int x,y,z,d=0,d2,l=0,r;
	vector<int>v;
	vector<pair<int,int>>p(2000001,{-1,-1});
	cin>>x>>y;
    for(int i=0;i<x;i++){
		cin>>c;
		v.push_back(c=='T'?2:1);
		d+=v[i];
		//cout<<v[i]<<" ";
	}
	r=x-1;
	d2=d;
	while(d>0){
		p[d]={l,r};
		if(v[r]==1&&v[l]==1){
			l++;
			r--;
		}
		else{
			if(v[r]==2)r--;
			else l++;
		}
		d-=2;
	}
	d=d2-1;
	l=0;
	r=x-1;
	while(r>l&&v[l]==2&&v[r]==2){
		d-=2;
		r--;
		l++;
	}
	if(v[r]==1)l=-1;
	else r=x;
	r--;
	l++;
	while(d>0){
		p[d]={l,r};
		if(v[r]==1&&v[l]==1){
			l++;
			r--;
		}
		else{
			if(v[r]==2)r--;
			else l++;
		}
		d-=2;
	}
	for(int i=0;i<y;i++){
		cin>>z;
		if(p[z].first!=-1)cout<<p[z].first+1<<" "<<p[z].second+1<<endl;
		else cout<<"NIE"<<endl;
	}
	//for(int i=0;i<2*x;i++)cout<<i<<" "<<p[i].first<<" "<<p[i].second<<endl;
}
