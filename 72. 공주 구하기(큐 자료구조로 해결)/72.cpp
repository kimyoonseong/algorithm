#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> map[10];
int main(){
	
	int i,n,k;
	queue<int> Q;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		Q.push(i);	
	}
	while(!Q.empty()){
		for(i=1;i<k;i++){
			Q.push(Q.front());
			Q.pop();		
		}
		Q.pop();
		if(Q.size()==1){
			cout<<Q.front();
			Q.pop();
		}
	}
	return 0;
}
