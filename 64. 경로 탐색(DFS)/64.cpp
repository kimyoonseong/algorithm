#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int map[30][30], cnt=0, ch[30];

void DFS(int v){
	int i;
	if(v==n){
		cnt++;
	}
	else{
		for(i=1;i<=n;i++){
			if(map[v][i]=1 && ch[i]==0){
				ch[i]=1;
				DFS(i);
				ch[i]=0;
			}
		}
	}
}
int main(){
	int n,m,i,a,b,j;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		cin>>a>>b;
		map[a][b]=1;

	}
	ch[1]=1;
	DFS(1);
	cout<<cnt;
	
	
	
	
	return 0;
}
