#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans,t,b;
	while(cin>>ans){
		for(b=2;b<=ans;b++){
			t=0;
			while(ans%b==0){
				t++;
				ans=ans/b;
			}
			if(t>1){
				cout<<b<<"^"<<t;
				if(ans>1){
					cout<<" * "; 
				}
			}
			if(t==1){
				cout<<b;
				if(ans>1){
					cout<<" * ";
				}
			}
			if(ans==1){
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}
