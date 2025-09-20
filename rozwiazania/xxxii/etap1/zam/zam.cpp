#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
	string s;
	int lc,ld,lca,lda,c1=0,odp=0,odpa=0;
    cin>>s;
    lc=s.size();
	lca=s.size();
    ld=0;
    for(int i=0;i<s.size();i++){
    	c1+=int(s[i])-48;
    	if(s[i]=='9') ld++;
	}
	lda=ld;
	if(c1==1){
		if(s.size()==1){
			cout<<0;
			return(0);
		}
		cout<<1;
		return(0);
	}
	if(s[s.size()-1]!='0' and s[s.size()-1]!='9'){
		odp+=57-int(s[s.size()-1]);
		ld++;
	}
	int i=0;
    while(lc!=ld){
		if(s[i]=='9') odp++;
		else{
			if(s[i]=='0') lc--;
			else{
				odp+=58-int(s[i]);
				ld++;
			}
		}
		i++;
	}
	for(int i=1;i<7;i++){
		if(s.size()>=i){
			odpa+=(57-int(s[s.size()-i]))*pow(10,i-1);
			if(s[s.size()-i]!='9') lda++;
		}
	}
	i=0;
    while(lca!=lda){
		if(s[i]=='9') odpa++;
		else{
			if(s[i]=='0') lca--;
			else{
				odpa+=58-int(s[i]);
				lda++;
			}
		}
		i++;
	}
	cout<<min(odp,odpa)+2;
}
