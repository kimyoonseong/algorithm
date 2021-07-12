#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,a[11], m,cnt=0,path[11];
bool flag=false;
void DFS(int L, int val){
	if(L==n+1){
		if(val==m){
			cnt++;
			for(int i=1;i<L;i++){
				cout<<path[i];	
			}
			puts("");
		}
	}
	
	else{
		path[L]=a[L];
		DFS(L+1,val+a[L]);
		path[L]=-a[L];
		DFS(L+1,val-a[L]);
		path[L]=0;	
		DFS(L+1,val); 
	}
}
	

int main(){
	int i;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	DFS(1,0);
	if(cnt==0) cout<<"-1";
	else cout<<cnt;
	return 0;
}
