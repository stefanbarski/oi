#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,y;
    cin>>x>>y;
    cout<<y-x+1-(((y-x+1)/2)+(x%2)*((y-x+1)%2))%2-(((y-x+1)/2)+((x+1)%2)*((y-x+1)%2))%2;
}
