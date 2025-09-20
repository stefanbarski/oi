#include <cmath>
#include <time.h>
#include <iomanip>
#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <algorithm>
#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    int x,y,z,r,s;
    bool t=false;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>y;
        cin>>z;
        v[y-1]=z;
	}
	r=x-v[x-1];
    s=x+v[x-1];
    if(r%2){
        cout<<"TAK";
        return(0);
    }
    for(int i=0;i<r+1;i++){
        //cout<<x+v[x-1-i]-i<<" ";
        if(x+v[x-1-i]-i!=s){
            t=true;
        }
	}
    if(t){
        cout<<"TAK";
        return(0);
    }
    cout<<"NIE";
}
