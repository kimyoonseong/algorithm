#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, cnt=0, ch[30];
vector<int> map[30];

void DFS(int v){
	int i;
	if(v==n){
		cnt++;
	}
	else{
		for(i=0;i<map[v].size();i++){
			if(ch[map[v][i]]==0){
				ch[map[v][i]]=1;
				DFS(map[v][i]);
				ch[map[v][i]]=0;
			}
		}
	}
}
int main(){
	int m,i,a,b,j;
	cin>>n>>m;
	for(i=1;i<=m;i++){
			cin>>a>>b;
			map[a].push_back(b);
	}
	ch[1]=1;
	DFS(1);
	
	cout<<cnt;
	
	return 0;
}
